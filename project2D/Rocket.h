#pragma once
#include "Alien.h"
class Rocket
{
public:
	Vector2 mPos;
	Vector2 mScale;
	Alien *mAliens;
	int mNumAliens;
	bool mIsFired;
	Rocket();
	Rocket(Vector2 pos);
	Rocket(Vector2 pos, Alien *aliens, int numAilens);
	~Rocket();	
	void Update(float deltaTime);
	void Fire(Vector2 pos);
};