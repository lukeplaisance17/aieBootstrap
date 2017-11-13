#include "Tank.h"
#include <iostream>
Tank::Tank()
{
}
Tank::~Tank()
{
}
Tank::Tank(float x, float y)
{
	mPx = x;
	mPy = y;
	mLives = 3;
}

bool Tank::CheckLives() 
{
	if (mLives > 0)
		return true;
	else
		return false;

}

//int Tank::LifeCounter()
//{
//	for (int i = 0; i < 3; i--)
//	{
//		std::cout << mLives;
//	}
//}
