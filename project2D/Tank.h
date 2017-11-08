#pragma once

class Tank
{
private:
	float mPx;
	float mPy;
	int mLives;
public:
	Tank(float x, float y);
	bool CheckLives();
	int LifeCounter();
};