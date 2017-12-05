#pragma once
#include <iostream>
using namespace std;
class Vector3
{
public:
	float mX; // x value
	float mY; // y value
	float mZ; // z value
	/*Prototype: Vector3()
	Argument : none
	Description : makes an instance of the Vector3 class
	Precondition : none
	Postcondition : Constructs the Vector3 instance
	Protection Level : Public*/
	Vector3();
	/*Prototype: Vector2(float x, float y, float z)
	Argument : float x, float y, float z
	Description : sets the X, Y, and Z value for the vector
	Precondition : an instance of the Vector3 class
	Postcondition : sets the X, Y, and Z value for the vector
	Protection Level : Public*/
	Vector3(float x, float y, float z);
	/*Prototype: Vector3 operator+(Vector3 & other)
	Argument : Vector3 & other
	Description : adds two vectors together
	Precondition : an instance of the Vector3 class
	Postcondition : returns the sum of two vectors
	Protection Level : Public*/
	Vector3 operator+(Vector3 & other);
	/*Prototype: Vector3 operator-(Vector3 & other)
	Argument : Vector3 & other
	Description : subtracts two vectors
	Precondition : an instance of the Vector3 class
	Postcondition : returns the difference of two vectors
	Protection Level : Public*/
	Vector3 operator-(Vector3 & other);
	/*Prototype: Vector3 operator*(float other)
	Argument : float other
	Description : multiplies two vectors
	Precondition : an instance of the Vector3 class
	Postcondition : returns the product of two vectors
	Protection Level : Public*/
	Vector3 operator*(float other);
	/*Prototype: bool operator==(Vector3 & other)
	Argument : Vector3 & other
	Description : checks to see if two vectors are equal
	Precondition : an instance of the Vector3 class
	Postcondition : checks to see if two vectors are equal
	Protection Level : Public*/
	bool operator==(Vector3 & other);
	/*Prototype: float Dot(Vector3 & other)
	Argument : Vector3 & other
	Description : finds the dot product of the vector
	Precondition : an instance of the Vector3 class
	Postcondition : finds the dot product of the vector
	Protection Level : Public*/
	float Dot(Vector3 & other);
	/*Prototype: Vector3 Cross(Vector3 & other);
	Argument: Vector3 & other
	Description : finds the cross product of the vector
	Precondition : an instance of the Vector3 class
	Postcondition : finds the cross product
	Protection Level : Public*/
	Vector3 Cross(Vector3 & other);
	/*Prototype: Vector3 Normalize()
	Argument : none
	Description : normalizes the vector after finding the magnitude
	Precondition : an instance of the Vector3 class
	Postcondition : normalizes the vector
	Protection Level : Public*/
	Vector3 Normalize();
	/*Prototype: float Magnitude()
	Argument : none
	Description : finds the magnitude of the vector
	Precondition : an instance of the Vector3 class
	Postcondition : finds the magnitude
	Protection Level : Public*/
	float Magnitude();
	/*Prototype: friend ostream& operator<<(ostream& os, const Vector3 vector)
	Argument : ostream& os, const Vector3 vector
	Description : outputs the X, Y, and Z value to the console
	Precondition : an instance of the Vector3 class
	Postcondition : outputs the X, Y, and Z value to the console
	Protection Level : Public*/
	friend ostream& operator<<(ostream& os, const Vector3 vector);
	/*Prototype: friend istream& operator<<(istream& is, const Vector3 vector)
	Argument : ostream& os, const Vector3 vector
	Description : takes in the X, Y, and Z value via user
	Precondition : an instance of the Vector3 class
	Postcondition : takes in the X, Y, and Z value via user
	Protection Level : Public*/
	friend istream& operator >> (istream& is, Vector3 vector);
};