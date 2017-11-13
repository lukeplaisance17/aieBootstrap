#include "Rocket.h"
#include "Tank.h"
#include <Input.h>
Rocket::Rocket()
{
	mIsFired = false;
}

Rocket::~Rocket()
{
}

Rocket::Rocket(Vector2 pos)
{	
	mPos = Vector2(pos.mX, pos.mY);
	mIsFired = false;
}

void Rocket::Update(float deltaTime)
{	
	if (mIsFired)
		mPos.mY += 750.0f * deltaTime;
}