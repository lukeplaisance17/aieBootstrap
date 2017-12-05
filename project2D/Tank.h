#pragma once
#include <Vector2.h>
#include "Rocket.h"
class Tank
{
private:
	int mFiredRound; //Number for how many rounds have fired
public:
	Rocket *mRoundsLeft; // variable for how many rounds left for your tank
	Vector2 mPos; //Using the Vector2’s  X and Y
	Vector2 mScale; //Finds the min and max for boundaries and collision
	/*Prototype: Tank()
	Argument : none
	Description : makes an instance of the Tank class
	Precondition : none
	Postcondition : makes an instance of the Tank class
	Protection Level : public*/
	Tank();
	/*Prototype: ~Tank()
	Argument : none
	Description : deconstructor for the Tank class
	Precondition : none
	Postcondition : deconstructor for the Tank class
	Protection Level : public*/
	~Tank();
	/*Prototype:Tank(Vector2 pos)
	Argument : Vector2 pos
	Description : sets position and keeps track of the rockets fired
	Precondition : an instance of the Tank class
	Postcondition : sets position and keeps track of the rockets fired
	Protection Level : public*/
	Tank(Vector2 pos);

	bool isFired; //Condition to check if a rocket was fired

	/*Prototype: void Update(float deltaTime, Alien *alien)
	Argument : float deltaTime, Alien *alien
	Description : updates the tank’s firing and movement every frame
	Precondition : an instance of the Tank class
	Postcondition : updates the tank’s firing and movement every frame
	Protection Level : public*/
	void Update(float deltaTime, Alien *alien);
};