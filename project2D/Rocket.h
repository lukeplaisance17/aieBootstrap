#pragma once
#include "Alien.h"
class Rocket
{
public:
	Vector2 mPos; //Using the Vector2’s  X and Y
	Vector2 mScale; //Finds the min and max for boundaries and collision
	Alien *mAliens; //Reference to the Alien class
	int mNumAliens; //Number for the amount of aliens
	bool mIsFired; //Condition to check if a rocket was fired
	/*Prototype: Rocket()
	Argument : none
	Description : makes an instance of the Rocket class
	Precondition : none
	Postcondition : makes an instance of the Rocket class
	Protection Level : public*/
	Rocket();
	/*Prototype:Rocket(Vector2 pos)
	Argument : Vector2 pos
	Description : sets position, and check for fired rocket
	Precondition : an instance of the Tank class
	Postcondition : sets position, scale, number of aliens, and checks for fired rocket
	Protection Level : public*/
	Rocket(Vector2 pos);
	/*Prototype: Rocket(Vector2 pos, Alien *aliens, int numAilens)
	Argument : Vector2 pos, Alien *aliens, int numAilens
	Description : keeps track of position, number of aliens, and condition of the rocket
	Precondition : an instance of the Tank class
	Postcondition : keeps track of position, number of aliens, and condition of the rocket
	Protection Level : public*/
	Rocket(Vector2 pos, Alien *aliens, int numAilens);
	/*Prototype: ~Rocket()
	Argument : none
	Description : deconstructor for the Rocket class
	Precondition : none
	Postcondition : deconstructor for the Rocket class
	Protection Level : public*/
	~Rocket();
	/*Prototype: void Update(float deltaTime, Alien *alien)
	Argument : float deltaTime, Alien *alien
	Description : updates the rocket movement and collision detection every frame
	Precondition : an instance of the Tank class
	Postcondition : updates the rocket movement and collision detection every frame
	Protection Level : public*/
	void Update(float deltaTime, Alien *aliens);
	/*Prototype: void Fire(Vector2 pos)
	Argument : Vector2 pos
	Description : fires the rocket if the condition is true
	Precondition : none
	Postcondition : fires the rocket if the condition is true
	Protection Level : public*/
	void Fire(Vector2 pos);
};