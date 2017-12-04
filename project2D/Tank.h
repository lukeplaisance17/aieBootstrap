#pragma once
#include <Vector2.h>
#include "Rocket.h"
class Tank
{
private:
	int mLives;
	int mFiredRound;
public:
	Rocket *mRoundsLeft;
	Vector2 mPos;
	Vector2 mScale;
	Tank();
	~Tank();
	Tank(Vector2 pos);
	bool isFired;
	void Update(float deltaTime, Alien *alien);
	bool CheckLives();
	int LifeCounter();
};