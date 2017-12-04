#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "Tank.h"
#include "Rocket.h"
#include "Alien.h"

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_texture;
	aie::Texture*		m_alienTexture;
	aie::Texture*       m_missileTexture;
	aie::Texture*       m_winTexture;
	aie::Texture*       m_orbitTexture;
	aie::Texture*       m_loseTexture;
	aie::Font*			m_font;
	Tank *mTank;
	Rocket *mRocket;
	Alien *mAlien;

	float m_cameraX, m_cameraY;
	float m_timer;
	bool mWin;
	bool mLose;
};