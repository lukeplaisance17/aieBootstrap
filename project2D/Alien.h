#pragma once
#include <Vector2.h>
class Alien
{
public:
	Vector2 mPos;
	Vector2 mScale;
	Alien *mAliens;
	Alien();
	~Alien();
	Alien(Vector2 pos);
	void Update(float deltaTime);
	bool Dead();
	void Collision();
	bool moveDown;
	bool Lose();

};