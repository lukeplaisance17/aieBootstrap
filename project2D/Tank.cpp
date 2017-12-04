#include "Tank.h"
#include <iostream>
#include <Input.h>
Tank::Tank()
{
	isFired = false;
	mRoundsLeft = new Rocket[500];
	for (int i = 0; i < 500; i++)
	{
		mRoundsLeft[i] = Rocket(mPos,nullptr, 10);
	}
	mLives = 3;
	mFiredRound = 0;
}

Tank::~Tank()
{
}

Tank::Tank(Vector2 pos)
{
	mPos = Vector2(pos.mX, pos.mY);
	mRoundsLeft = new Rocket[500];
	for (int i = 0; i < 500; i++)
	{
		mRoundsLeft[i] = Rocket(mPos, nullptr, 10);
	}
	mFiredRound = 0;
}

void Tank::Update(float deltaTime, Alien *aliens)
{
	aie::Input* input = aie::Input::getInstance();

	if (input->isKeyDown(aie::INPUT_KEY_A))
		 mPos.mX -= 550.0f * deltaTime;

	if (input->isKeyDown(aie::INPUT_KEY_D))
		mPos.mX += 550.0f * deltaTime;

	if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	{
		mRoundsLeft[mFiredRound++];
		mRoundsLeft[mFiredRound].Fire(mPos);
	}

	for (int i = 0; i < 500; i++)
	{
		mRoundsLeft[i].Update(deltaTime, aliens);
	}
}

bool Tank::CheckLives()
{
	if (mLives > 0)
		return true;
	else
		return false;

}

int Tank::LifeCounter()
{
	for (int i = 0; i < 3; i--)
	{
		return mLives;
	}
}
