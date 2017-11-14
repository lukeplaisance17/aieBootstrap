#pragma once
#include <Vector2.h>
#include "Rocket.h"
class Alien
{
public:
	Vector2 mPos;
	Vector2 mScale;
	Alien();
	~Alien();
	Alien(Vector2(pos));
	void Movement(float deltaTime);
	bool Dead();
	void Collision();
	bool moveLeft;
	bool moveRight;
	bool moveDown;

};