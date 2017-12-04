#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "Tank.h"
#include "DEFINES.h"

Application2D::Application2D() {

}

Application2D::~Application2D() {

}

bool Application2D::startup() {

	m_2dRenderer = new aie::Renderer2D();

	m_texture = new aie::Texture("./textures/ship.png");
	m_alienTexture = new aie::Texture("./textures/MrMatt.png");
	m_missileTexture = new aie::Texture("./textures/missile.png");
	m_winTexture = new aie::Texture("./textures/youWin.png");
	m_orbitTexture = new aie::Texture("./textures/orbit.png");
	m_loseTexture = new aie::Texture("./textures/youLose.png");

	m_font = new aie::Font("./font/consolas.ttf", 32);

	m_cameraX = 0;
	m_cameraY = 0;
	m_timer = 0;
	mWin = false;
	mLose = false;
	mTank = new Tank(Vector2(SCREEN_WIDTH / 2, 40));
	mAlien = new Alien[10];
	for(int i = 0; i < 10; i++)
	{
		mAlien[i] = Alien(Vector2(400 + (i * 75), SCREEN_HEIGHT - 40));
	}
	return true;
}

void Application2D::shutdown() {

	delete m_font;
	delete m_texture;
	delete m_alienTexture;
	delete m_2dRenderer;
}

void Application2D::update(float deltaTime) {

	m_timer += deltaTime;

	// input example
	aie::Input* input = aie::Input::getInstance();

	mTank->Update(deltaTime, mAlien);
	int dead = 0;
	for(int i = 0; i < 10; i++)
	{
		mAlien[i].Update(deltaTime);
		if (mAlien[i].mIsDead)
			dead++;
	}

	if (dead >= 10)
		mWin = true;
	if (mAlien->mPos.mY <= 120)
		mLose = true;

	// exit the application
	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
		quit();
}

void Application2D::draw()
{
	// wipe the screen to the background colour
	clearScreen();

	// set the camera position before we begin rendering
	m_2dRenderer->setCameraPos(m_cameraX, m_cameraY);

	// begin drawing sprites
	m_2dRenderer->begin();

	// Orbit
	m_2dRenderer->setRenderColour(1, 1, 1, 1);
	m_2dRenderer->drawSprite(m_orbitTexture, 640, 360, 1280, 720, 0);

	// Shield
	m_2dRenderer->setRenderColour(0, 1, 1, 1);
	m_2dRenderer->drawLine(0, 100, 1280, 100, 5, 0);

	// Rocket
	for (int i = 0; i < 500; i++) {
		m_2dRenderer->setRenderColour(1, 1, 1, 1);
		if(mTank->mRoundsLeft[i].mIsFired)
			m_2dRenderer->drawSprite(m_missileTexture, mTank->mRoundsLeft[i].mPos.mX,
			mTank->mRoundsLeft[i].mPos.mY, 15, 40, 0);
	}
	// Tank
	m_2dRenderer->setRenderColour(1, 1, 1, 1);
	m_2dRenderer->drawSprite(m_texture, mTank->mPos.mX, mTank->mPos.mY, 80, 40, 0);

	// Alien
	for(int i = 0; i < 10; i++)
	{
		if (!mAlien[i].mIsDead)
		{
			m_2dRenderer->setRenderColour(1, 1, 1, 1);
			m_2dRenderer->drawSprite(m_alienTexture, mAlien[i].mPos.mX, mAlien[i].mPos.mY, 50, 50, 0);
		}
	}
	if(mWin)
	{		//Win screen
		m_2dRenderer->setRenderColour(1, 1, 1, 1);
		m_2dRenderer->drawSprite(m_winTexture, 640, 360, 1280, 720, 0);
	}
	if(mLose)
	{		//Lose screen
		m_2dRenderer->setRenderColour(1, 1, 1, 1);
		m_2dRenderer->drawSprite(m_loseTexture, 640, 360, 1280, 720, 0);
	}

	// output some text, uses the last used colour
	char fps[32];
	sprintf_s(fps, 32, "FPS: %i", getFPS());
	m_2dRenderer->drawText(m_font, fps, 0, 720 - 32);
	m_2dRenderer->drawText(m_font, "Press ESC to quit!", 0, 720 - 64);

	// done drawing sprites
	m_2dRenderer->end();
}