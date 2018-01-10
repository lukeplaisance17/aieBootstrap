#include "Rocket.h"
#include <Input.h>
Rocket::Rocket()
{
	mIsFired = false;
	mfirstRocket = NULL;
	mlastRocket = NULL;
}

Rocket::~Rocket()
{
}

Rocket::Rocket(Vector2 pos, Alien *aliens, int numAilens)
{
	this->mPos = Vector2(pos.mX, pos.mY);
	this->mScale = Vector2(7.5, 20);
	this->mAliens = aliens;
	this->mNumAliens = numAilens;
	mIsFired = false;

	if(mfirstRocket == NULL)
	{
		mfirstRocket = new NodeType<int>;
		mlastRocket = mfirstRocket;
		mlastRocket->link = NULL;
	}
	else
	{
		mInsert->InsertLast(1);
	}
}

Rocket::Rocket(Vector2 pos)
{
	mPos = Vector2(pos.mX, pos.mY);
	mIsFired = false;
}

void Rocket::Update(float deltaTime, Alien *aliens)
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
		if (aliens[i].mIsDead)
			continue;
		for (int j = 0; j < 4; j++)
		{

			Vector2 alienCorners[2] = {
			Vector2(aliens[i].mPos.mX + aliens[i].mScale.mX,aliens[i].mPos.mY + aliens[i].mScale.mY), //topR
			Vector2(aliens[i].mPos.mX - aliens[i].mScale.mX,aliens[i].mPos.mY - aliens[i].mScale.mY) }; //botL
			if(corners[j].mX >= alienCorners[1].mX && corners[j].mX <= alienCorners[0].mX)
			{
				if (corners[j].mY >= alienCorners[1].mY && corners[j].mY <= alienCorners[0].mY)
					aliens[i].Hit();
			}

		}
	}
}

void Rocket::Fire(Vector2 pos)
{
	mIsFired = true;
	mPos = Vector2(pos.mX, pos.mY);
}