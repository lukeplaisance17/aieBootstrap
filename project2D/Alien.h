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
	int mAlienArray[10];
	void Update(float deltaTime);
	bool Hit();
	bool mIsDead;
	void Collision();
	bool moveDown;
	//bool Lose();

};