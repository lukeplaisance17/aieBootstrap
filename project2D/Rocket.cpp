#include "Rocket.h"
#include <Input.h>
Rocket::Rocket()
{
	mIsFired = false;
}

Rocket::~Rocket()
{
}

Rocket::Rocket(Vector2 pos, Alien *aliens, int numAilens)
{
	this->mPos = Vector2(pos.mX, pos.mY);
	this->mAliens = aliens;
	this->mNumAliens = numAilens;
}

Rocket::Rocket(Vector2 pos)
{
	mPos = Vector2(pos.mX, pos.mY);
	mIsFired = false;
}

void Rocket::Update(float deltaTime)
{	
	if (mIsFired)
		mPos.mY += 710.0f * deltaTime;

	for (int i = 0; i < mNumAliens; i++)
	{
		Vector2 corners[4] = {
								Vector2(mPos.mX + mScale.mX, mPos.mY + mScale.mY),
								Vector2(mPos.mX - mScale.mX, mPos.mY - mScale.mY),
								Vector2(mPos.mX - mScale.mX, mPos.mY + mScale.mY),
								Vector2(mPos.mX + mScale.mX, mPos.mY - mScale.mY) };
		for (int i = 0; i < 4; i++)
		{
			Vector2 alienCorners[2] = { 
			Vector2(mAliens[i].mPos.mX + mAliens[i].mScale.mX,mAliens[i].mPos.mY + mAliens[i].mScale.mY),
			Vector2(mAliens[i].mPos.mX - mAliens[i].mScale.mX,mAliens[i].mPos.mY - mAliens[i].mScale.mY) };
		}		
		if(corners[4] == mAliens->mPos)
		{
			mAliens->mIsDead = true;
		}
	}
}

void Rocket::Fire(Vector2 pos)
{
	mIsFired = true;
	mPos = Vector2(pos.mX, pos.mY);
}