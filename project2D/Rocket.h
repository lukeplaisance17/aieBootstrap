#pragma once
#include <Vector2.h>
class Rocket
{
public:
	Vector2 mPos;
	Vector2 mScale;
	bool mIsFired;
	Rocket();
	~Rocket();
	Rocket(Vector2 pos);
	void Update(float deltaTime);
	void Fire(Vector2 pos);
};