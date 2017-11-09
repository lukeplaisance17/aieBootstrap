#pragma once

class Tank
{
private:
	float mPx;
	float mPy;
	int mLives;
public:
	Tank();
	~Tank();
	Tank(float x, float y);
	bool CheckLives();
	int LifeCounter();
};