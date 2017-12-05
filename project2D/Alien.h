#pragma once
#include <Vector2.h>
class Alien
{
public:
	Vector2 mPos; //Using the Vector2’s  X and Y
	Vector2 mScale; //Finds the min and max for boundaries and collision
	Alien *mAliens; //Alien object
	/*Prototype:Alien()
	Argument : none
	Description : makes an instance of the Alien class
	Precondition : an instance of the String class
	Postcondition : makes an instance of the Alien class
	Protection Level : public*/
	Alien();
	/*Prototype:~Alien()
	Argument : none
	Description : deconstructor for the Alien class
	Precondition : none
	Postcondition : deconstructor for the Alien class
	Protection Level : public*/
	~Alien();
	/*Prototype:Alien(Vector2 pos)
	Argument : Vector2 pos
	Description : sets position, scale, and conditions for the aliens
	Precondition : an instance of the Alien class
	Postcondition : sets position, scale, and conditions for the aliens
	Protection Level : public*/
	Alien(Vector2 pos);
	int mAlienArray[10]; //Array that stores the aliens
	/*Prototype: void Update(float deltaTime)
	Argument : float deltaTime
	Description : updates the alien’s movement every frame
	Precondition : an instance of the Alien class
	Postcondition : updates the alien’s movement every frame
	Protection Level : public*/
	void Update(float deltaTime);
	/*Prototype:bool Hit()
	Argument : none
	Description : checks to see if the alien got hit or not
	Precondition : an instance of the Alien class
	Postcondition : checks to see if the alien got hit or not
	Protection Level : public*/
	bool Hit();
	bool mIsDead; //Condition to see if the alien is dead or not
	/*Prototype: void Collision()
	Argument : none
	Description : sets the game boundaries for the aliens
	Precondition : an instance of the Alien class
	Postcondition : sets the game boundaries for the aliens
	Protection Level : public*/
	void Collision();
	bool moveDown; //Condition for the alien to move down the screen

};