#pragma once
#include <Vector2.h>
#include "Rocket.h"
class Alien
{
public:
	Vector2 mPos;
	Vector2 mScale;
	Alien *mAliens;
	Rocket *mRockets;
	Alien();
	~Alien();
	Alien(Vector2(pos));
	void Update(float deltaTime);
	bool Dead();
	void Collision();
	bool moveDown;
	bool Lose();

};