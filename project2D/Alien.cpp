#include "Alien.h"
#include "Rocket.h"
#include "DEFINES.h"
Alien::Alien()
{
}

Alien::~Alien()
{
}

Alien::Alien(Vector2(pos))
{
	mPos = Vector2(pos.mX, pos.mY);
	mAliens = new Alien[10];
	bool moveDown = false;
}

void Alien::Update(float deltaTime)
{
	
	if (moveDown) {
		mPos.mY -= 3.0f * deltaTime;
	}
	
}

bool Alien::Dead()
{
	return false;
}

void Alien::Collision()
{
	int *collisions = new int[4]{ 0,0,0,0 };
	Vector2 boundaries[4];
	boundaries[0] = Vector2(mPos.mX + mScale.mX, mPos.mY + mScale.mY); //Max
	boundaries[1] = Vector2(mPos.mX - mScale.mX, mPos.mY - mScale.mY); //Min
	boundaries[2] = Vector2(mPos.mX - mScale.mX, mPos.mY + mScale.mY); //Top Left
	boundaries[3] = Vector2(mPos.mX + mScale.mX, mPos.mY - mScale.mY); //Bot Right

	if (boundaries[0].mX > 1280)
		collisions[0] = 1; //Right Collision
	if (boundaries[0].mX < 0 + 5)
		collisions[1] = 1; //Left Collision
	if (boundaries[0].mY > 720 - 5)
		collisions[2] = 1; //Top Collision
	if (boundaries[0].mY < 0)
		collisions[3] = 1; //Bottom Collision
}
