#include "Alien.h"
#include "Rocket.h"
#include "DEFINES.h"
Alien::Alien()
{
}

Alien::~Alien()
{
}

Alien::Alien(Vector2 pos)
{
	mPos = Vector2(pos.mX, pos.mY);
	mScale = Vector2(25, 25);
	mAliens = new Alien[10];
	mIsDead = false;
	bool moveDown = false;
}

void Alien::Update(float deltaTime)
{
	if (moveDown)
	{
		mPos.mY -= 50.0f * deltaTime;
	}
}

bool Alien::Hit()
{
	 mIsDead = true;
	 return new Vector2;
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

bool Alien::Lose()
{
	if(mAliens->mPos.mY <= 100)
	{
		return 0;
	}
}


