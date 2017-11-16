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

	m_texture = new aie::Texture("./textures/numbered_grid.tga");
	m_shipTexture = new aie::Texture("./textures/ship.png");

	m_font = new aie::Font("./font/consolas.ttf", 32);
	
	m_cameraX = 0;
	m_cameraY = 0;
	mPx = 650;
	mPy = 40;
	m_timer = 0;
	mTank = new Tank(Vector2(SCREEN_WIDTH / 2, 40));	
	mAlien = new Alien(Vector2(SCREEN_WIDTH / 2, SCREEN_HEIGHT - 40));

	return true;
}

void Application2D::shutdown() {
	
	delete m_font;
	delete m_texture;
	delete m_shipTexture;
	delete m_2dRenderer;
}

void Application2D::update(float deltaTime) {

	m_timer += deltaTime;

	// input example
	aie::Input* input = aie::Input::getInstance();

	mTank->Update(deltaTime);
	mAlien->Update(deltaTime);
	mAlien->Collision();
 
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

	// Shield
	m_2dRenderer->setRenderColour(0, 1, 1, 1);
	m_2dRenderer->drawLine(0, 100, 1280, 100, 5, 1);

	// Rocket
	for (int i = 0; i < 500; i++) {
		m_2dRenderer->setRenderColour(1, 1, 1, 1);
		if(mTank->mRoundsLeft[i].mIsFired)
			m_2dRenderer->drawBox(mTank->mRoundsLeft[i].mPos.mX, mTank->mRoundsLeft[i].mPos.mY, 5, 10, 0);
	}
	// Tank
	m_2dRenderer->setRenderColour(0, 1, 0, 1);
	m_2dRenderer->drawBox(mTank->mPos.mX, mTank->mPos.mY, 80, 40, 0);

	// Alien
	m_2dRenderer->setRenderColour(1, 1, 1, 1);
	m_2dRenderer->drawBox(mAlien->mPos.mX, mAlien->mPos.mY, 15, 15, 0);

	// output some text, uses the last used colour
	char fps[32];
	sprintf_s(fps, 32, "FPS: %i", getFPS());
	m_2dRenderer->drawText(m_font, fps, 0, 720 - 32);
	m_2dRenderer->drawText(m_font, "Press ESC to quit!", 0, 720 - 64);

	// done drawing sprites
	m_2dRenderer->end();
}