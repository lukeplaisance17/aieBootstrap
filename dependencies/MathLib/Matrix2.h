#pragma once
#include <iostream>
using namespace std;
class Matrix2
{
public:
	float mMat[4]; // sets the matrix
	/*Prototype: Matrix2()
	Argument : none
	Description : makes an instance of the Matrix2 class
	Precondition : none
	Postcondition : Constructs the Matrix  instance
	Protection Level : Public*/
	Matrix2();
	/*Prototype: Matrix2(float mat[])
	Argument : float mat[]
	Description : loops through the matrix
	Precondition : an instance of the Matrix2 class
	Postcondition : loops through the matrix
	Protection Level : Public*/
	Matrix2(float mat[]);
	/*Prototype: Matrix2(float indexA, float indexB, float indexC, float indexD)
	Argument : float indexA, float indexB, float indexC, float indexD
	Description : sets all the indexes in the matrix
	Precondition : an instance of the Matrix2 class
	Postcondition : sets all the indexes in the matrix
	Protection Level : Public*/
	Matrix2(float indexA, float indexB, float indexC, float indexD);
	/*Prototype: Matrix2 Rotate(float angle)
	Argument : float angle
	Description : rotates the matrix on a 2D plan
	Precondition : an instance of the Matrix2 class
	Postcondition : rotates the matrix on a 2D plan
	Protection Level : Public*/
	Matrix2 Rotate(float angle);
	/*Prototype: Matrix2 operator+(Matrix2 &other)
	Argument : Matrix2 &other
	Description : adds two matrices
	Precondition : an instance of the Matrix2 class
	Postcondition : returns the sum of two matrices
	Protection Level : Public*/
	Matrix2 operator+(Matrix2 &other);
	/*Prototype: Matrix2 operator-(Matrix2 &other)
	Argument : Matrix2 &other
	Description : subtracts two matrices
	Precondition : an instance of the Matrix2 class
	Postcondition : returns the difference of two matrices
	Protection Level : Public*/
	Matrix2 operator-(Matrix2 &other);
	/*Prototype: Matrix2 operator*(Matrix2 &other)
	Argument : Matrix2 &other
	Description : multiplies two matrices
	Precondition : an instance of the Matrix2 class
	Postcondition : returns the product of two matrices
	Protection Level : Public*/
	Matrix2 operator*(Matrix2 &other);
	/*Prototype: friend ostream& operator<<(ostream& os, const Matrix2 vector)
	Argument : ostream& os, const Matrix2 vector
	Description : outputs the numbers in the matrix to the console
	Precondition : an instance of the Matrix2 class
	Postcondition : outputs the numbers in the matrix to the console
	Protection Level : Public*/
	friend ostream& operator<<(ostream& os, const Matrix2 matrix);
	/*Prototype: friend istream& operator<<(istream& is, const Matrix2 vector)
	Argument : ostream& os, const Matrix2 vector
	Description : takes in the indexes for the matrix via user
	Precondition : an instance of the Matrix2 class
	Postcondition : takes in indexes for the matrix via user
	Protection Level : Public*/
	friend istream& operator >> (istream& is, Matrix2 matrix);
};