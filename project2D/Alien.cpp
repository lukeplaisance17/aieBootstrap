#include "Alien.h"
#include "Rocket.h"
Alien::Alien()
{
}

Alien::~Alien()
{
}

Alien::Alien(Vector2(pos))
{
	mPos = Vector2(pos.mX, pos.mY);
	moveLeft = false;
	moveRight = false;
	moveDown = false;
}

void Alien::Movement(float deltaTime)
{
	if (moveLeft) {
		mPos.mX -= 100.0f * deltaTime;
	}
	if (moveRight) {
		mPos.mX += 100.0 * deltaTime;
	}
	if (moveDown) {
		mPos.mY - +1.0f * deltaTime;
	}

	for (int i = 0; i < 720; i++) 
	{
		if (mPos.mX <= 0)
		{
			moveRight = true;
			moveDown = true;
		}
		if (mPos.mY >= 720)
		{
			moveLeft = true;
			moveDown = true;
		}
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
	if (boundaries[0].mX < 0)
		collisions[1] = 1; //Left Collision
	if (boundaries[0].mY > 720)
		collisions[2] = 1; //Top Collision
	if (boundaries[0].mY < 0)
		collisions[3] = 1; //Bottom Collision
}
