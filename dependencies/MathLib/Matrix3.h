#pragma once
#include <iostream>
using namespace std;
class Matrix3
{
public:
	float mMat[9]; // sets matrix
	/*Prototype: Matrix3()
	Argument : none
	Description : makes an instance of the Matrix3 class
	Precondition : none
	Postcondition : Constructs the Matrix  instance
	Protection Level : Public*/
	Matrix3();
	/*Prototype: Matrix3(float mat[])
	Argument : float mat[]
	Description : loops through the matrix
	Precondition : an instance of the Matrix3 class
	Postcondition : loops through the matrix
	Protection Level : Public*/
	Matrix3(float mat[]);
	/*Prototype: Matrix2(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI)
	Argument : float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI
	Description : sets all the indexes in the matrix
	Precondition : an instance of the Matrix3 class
	Postcondition : sets all the indexes in the matrix
	Protection Level : Public*/
	Matrix3(float indexA, float indexB, float indexC, float indexD,
	float indexE, float indexF, float indexG, float indexH, float indexI);
	/*Prototype: Matrix3 RotateX(float angle)
	Argument : float angle
	Description : rotates the matrix on the X axis
	Precondition : an instance of the Matrix3 class
	Postcondition : rotates the matrix on the X axis
	Protection Level : Public*/
	Matrix3 RotateX(float angle);
	/*Prototype: Matrix3 RotateY(float angle)
	Argument : float angle
	Description : rotates the matrix on the Y axis
	Precondition : an instance of the Matrix3 class
	Postcondition : rotates the matrix on the Y axis
	Protection Level : Public*/
	Matrix3 RotateY(float angle);
	/*Prototype: Matrix3 RotateZ(float angle)
	Argument : float angle
	Description : rotates the matrix on the Z axis
	Precondition : an instance of the Matrix3 class
	Postcondition : rotates the matrix on the Z axis
	Protection Level : Public*/
	Matrix3 RotateZ(float angle);
	/*Prototype: Matrix3 operator+(Matrix3 &other)
	Argument : Matrix3 &other
	Description : adds two matrices
	Precondition : an instance of the Matrix3 class
	Postcondition : returns the sum of two matrices
	Protection Level : Public*/
	Matrix3 operator+(Matrix3 &other);
	/*Prototype: Matrix3 operator-(Matrix3 &other)
	Argument : Matrix3 &other
	Description : subtracts two matrices
	Precondition : an instance of the Matrix3 class
	Postcondition : returns the difference of two matrices
	Protection Level : Public*/
	Matrix3 operator-(Matrix3 &other);
	/*Prototype: Matrix3 operator*(Matrix3 &other)
	Argument : Matrix3 &other
	Description : multiplies two matrices
	Precondition : an instance of the Matrix3 class
	Postcondition : returns the product of two matrices
	Protection Level : Public*/
	Matrix3 operator*(Matrix3 &other);
	/*Prototype: friend ostream& operator<<(ostream& os, const Matrix3 vector)
	Argument : ostream& os, const Matrix3 vector
	Description : outputs the numbers in the matrix to the console
	Precondition : an instance of the Matrix3 class
	Postcondition : outputs the numbers in the matrix to the console
	Protection Level : Public*/
	friend ostream& operator<<(ostream& os, const Matrix3 vector);
	/*Prototype: friend istream& operator<<(istream& is, const Matrix3 vector)
	Argument : ostream& os, const Matrix3 vector
	Description : takes in the indexes for the matrix via user
	Precondition : an instance of the Matrix3 class
	Postcondition : takes in indexes for the matrix via user
	Protection Level : Public*/
	friend istream& operator >> (istream& is, Matrix3 vector);
};