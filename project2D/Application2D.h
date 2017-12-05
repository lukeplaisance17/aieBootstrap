#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "Tank.h"
#include "Rocket.h"
#include "Alien.h"

class Application2D : public aie::Application {
public:

	Application2D(); // Consructor
	virtual ~Application2D(); // Destructor

	//Initializes all textures, conditions, and game characters
	virtual bool startup();
	//Shuts down the rederer, textures, and texts
	virtual void shutdown();

	//Character functions and conditions that update every frame
	virtual void update(float deltaTime);
	//renders all backgrounds and textures in the game
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer; //Renders the textures
	aie::Texture*		m_texture; //Ship texture
	aie::Texture*		m_alienTexture; //Alien texture
	aie::Texture*       m_missileTexture; // Missile Texture
	aie::Texture*       m_winTexture; // Win screen page
	aie::Texture*       m_orbitTexture; // background texture
	aie::Texture*       m_loseTexture; // Pose screen page
	aie::Font*			m_font; // Font used for "fps" and "esc" text
	Tank *mTank; // Tank
	Rocket *mRocket; // Rockets
	Alien *mAlien; // Aliens

	float m_cameraX, m_cameraY; //Sets the position where you view the game

	float m_timer; // Controls how object move across the screen over time
	bool mWin; // Win condition
	bool mLose; // Lose condition
	bool mGameover; // Checks to see if the game is over
};