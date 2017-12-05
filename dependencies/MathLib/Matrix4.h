#pragma once
#include <iostream>
using namespace std;
class Matrix4
{
public:
	float mMat[16]; // sets the matrix
	/*Prototype: Matrix4()
	Argument : none
	Description : makes an instance of the Matrix4 class
	Precondition : none
	Postcondition : Constructs the Matrix  instance
	Protection Level : Public*/
	Matrix4();
	/*Prototype: Matrix4(float mat[])
	Argument : float mat[]
	Description : loops through the matrix
	Precondition : an instance of the Matrix3 class
	Postcondition : loops through the matrix
	Protection Level : Public*/
	Matrix4(float mat[]);
	/*Prototype: Matrix2(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ,
	float indexK, float indexL, float indexM, float indexN, float indexO, float indexP)
	Argument : float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ,
	float indexK, float indexL, float indexM, float indexN, float indexO, float indexP
	Description : sets all the indexes in the matrix
	Precondition : an instance of the Matrix4 class
	Postcondition : sets all the indexes in the matrix
	Protection Level : Public*/
	Matrix4(float indexA, float indexB, float indexC, float indexD,
	float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ,
	float indexK, float indexL, float indexM, float indexN, float indexO, float indexP);
	/*Prototype: Matrix4 RotateX(float angle)
	Argument : float angle
	Description : rotates the matrix on the X axis
	Precondition : an instance of the Matrix4 class
	Postcondition : rotates the matrix on the X axis
	Protection Level : Public*/
	Matrix4 RotateX(float angle);
	/*Prototype: Matrix4 RotateY(float angle)
	Argument : float angle
	Description : rotates the matrix on the Y axis
	Precondition : an instance of the Matrix4 class
	Postcondition : rotates the matrix on the Y axis
	Protection Level : Public*/
	Matrix4 RotateY(float angle);
	/*Prototype: Matrix4 RotateZ(float angle)
	Argument : float angle
	Description : rotates the matrix on the Z axis
	Precondition : an instance of the Matrix4 class
	Postcondition : rotates the matrix on the Z axis
	Protection Level : Public*/
	Matrix4 RotateZ(float angle);
	/*Prototype: Matrix4 operator+(Matrix4 &other)
	Argument : Matrix4 &other
	Description : adds two matrices
	Precondition : an instance of the Matrix4 class
	Postcondition : returns the sum of two matrices
	Protection Level : Public*/
	Matrix4 operator+(Matrix4 &other);
	/*Prototype: Matrix4 operator-(Matrix4 &other)
	Argument : Matrix4 &other
	Description : subtracts two matrices
	Precondition : an instance of the Matrix4 class
	Postcondition : returns the difference of two matrices
	Protection Level : Public*/
	Matrix4 operator-(Matrix4 &other);
	/*Prototype: Matrix4 operator*(Matrix4 &other)
	Argument : Matrix4 &other
	Description : multiplies two matrices
	Precondition : an instance of the Matrix4 class
	Postcondition : returns the product of two matrices
	Protection Level : Public*/
	Matrix4 operator*(Matrix4 &other);
	/*Prototype: friend ostream& operator<<(ostream& os, const Matrix4 vector)
	Argument : ostream& os, const Matrix4 vector
	Description : outputs the numbers in the matrix to the console
	Precondition : an instance of the Matrix4 class
	Postcondition : outputs the numbers in the matrix to the console
	Protection Level : Public*/
	friend ostream& operator<<(ostream& os, const Matrix4 vector);
	/*Prototype: friend istream& operator<<(istream& is, const Matrix4 vector)
	Argument : ostream& os, const Matrix4 vector
	Description : takes in the indexes for the matrix via user
	Precondition : an instance of the Matrix4 class
	Postcondition : takes in indexes for the matrix via user
	Protection Level : Public*/
	friend istream& operator >> (istream& is, Matrix4 vector);
};