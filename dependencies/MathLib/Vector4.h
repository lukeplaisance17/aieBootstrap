#pragma once
#include <iostream>
using namespace std;
class Vector4
{
public:
	float mX; // x value
	float mY; // y value
	float mZ; // z value
	float mW; // w value
	/*Prototype: Vector4()
	Argument : none
	Description : makes an instance of the Vector4 class
	Precondition : none
	Postcondition : Constructs the Vector4 instance
	Protection Level : Public*/
	Vector4();
	/*Prototype: Vector2(float x, float y, float z, float w)
	Argument : float x, float y, float z, float w
	Description : sets the X, Y, Z, and W value for the vector
	Precondition : an instance of the Vector3 class
	Postcondition : sets the X, Y, Z, and W value for the vector
	Protection Level : Public*/
	Vector4(float x, float y, float z, float w);
	/*Prototype: Vector4 operator+(Vector3 & other)
	Argument : Vector4 & other
	Description : adds two vectors together
	Precondition : an instance of the Vector4 class
	Postcondition : returns the sum of two vectors
	Protection Level : Public*/
	Vector4 operator+(Vector4 & other);
	/*Prototype: Vector4 operator-(Vector4 & other)
	Argument : Vector4 & other
	Description : subtracts two vectors
	Precondition : an instance of the Vector4 class
	Postcondition : returns the difference of two vectors
	Protection Level : Public*/
	Vector4 operator-(Vector4 & other);
	/*Prototype: Vector4 operator*(float other)
	Argument : float other
	Description : multiplies two vectors
	Precondition : an instance of the Vector4 class
	Postcondition : returns the product of two vectors
	Protection Level : Public*/
	Vector4 operator*(float other);
	/*Prototype: bool operator==(Vector4 & other)
	Argument : Vector4 & other
	Description : checks to see if two vectors are equal
	Precondition : an instance of the Vector4 class
	Postcondition : checks to see if two vectors are equal
	Protection Level : Public*/
	bool operator==(Vector4 & other);
	/*Prototype: float Dot(Vector4 & other)
	Argument : Vector4 & other
	Description : finds the dot product of the vector
	Precondition : an instance of the Vector4 class
	Postcondition : finds the dot product of the vector
	Protection Level : Public*/
	float Dot(Vector4 & other);
	/*Prototype: Vector4 Normalize()
	Argument : none
	Description : normalizes the vector after finding the magnitude
	Precondition : an instance of the Vector4 class
	Postcondition : normalizes the vector
	Protection Level : Public*/
	Vector4 Normalize();
	/*Prototype: float Magnitude()
	Argument : none
	Description : finds the magnitude of the vector
	Precondition : an instance of the Vector4 class
	Postcondition : finds the magnitude
	Protection Level : Public*/
	float Magnitude();
	/*Prototype: friend ostream& operator<<(ostream& os, const Vector4 vector)
	Argument : ostream& os, const Vector4 vector
	Description : outputs the X, Y, Z, and W value to the console
	Precondition : an instance of the Vector4 class
	Postcondition : outputs the X, Y, Z, and W value to the console
	Protection Level : Public*/
	friend ostream& operator<<(ostream& os, const Vector4 vector);
	/*Prototype: friend istream& operator<<(istream& is, const Vector4 vector)
	Argument : ostream& os, const Vector4 vector
	Description : takes in the X, Y, Z, and W value via user
	Precondition : an instance of the Vector4 class
	Postcondition : takes in the X, Y, Z, and W value via user
	Protection Level : Public*/
	friend istream& operator >> (istream& is, Vector4 vector);
};

