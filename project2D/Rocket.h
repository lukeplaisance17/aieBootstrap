#pragma once

class Rocket
{
	float mX;
	float mY;
protected:
	float mTimer;
public:
	Rocket(float x, float y);
	~Rocket();
	void rocketSpeed(float time);
};