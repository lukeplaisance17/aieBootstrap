#pragma once
#include <Vector2.h>
#include "Rocket.h"
class Tank
{
private:
	int mLives;
	Rocket *mRoundsLeft;
	int mFiredRound;
public:
	Vector2 mPos;
	Vector2 mScale;
	Tank();
	~Tank();
	Tank(Vector2 pos);
	bool isFired;
	void Update(float deltaTime);
	bool CheckLives();
	int LifeCounter();
};