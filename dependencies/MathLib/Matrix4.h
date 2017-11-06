#pragma once
#include <iostream>
using namespace std;
class Matrix4
{
public:
	float mMat[];
	Matrix4();
	Matrix4(float mat[]);
	Matrix4(float indexA, float indexB, float indexC, float indexD, 
	float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, 
	float indexK, float indexL, float indexM, float indexN, float indexO, float indexP);
	Matrix4 RotateX(float angle);
	Matrix4 RotateY(float angle);
	Matrix4 RotateZ(float angle);
	Matrix4 operator+(Matrix4 &other);
	Matrix4 operator-(Matrix4 &other);
	Matrix4 operator*(Matrix4 &other);
	friend ostream& operator<<(ostream& os, const Matrix4 vector);
	friend istream& operator >> (istream& is, Matrix4 vector);
};