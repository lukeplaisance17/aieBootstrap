#include "Rocket.h"
#include <time.h>
#include "Tank.h"
#include "Application2D.h"
Rocket::Rocket(float x, float y)
{
	mX = x;
	mY = y;
}


Rocket::~Rocket()
{
}

void Rocket::rocketSpeed(float time)
{
	mTimer = 0;
	mTimer += time;
	for (int i = 0; i < 1000; i++)
	{
		mY + 200.0f * time;
	}
}
