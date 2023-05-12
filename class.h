#pragma once
struct   Matrix4x4 {
	float m[4][4];
};
struct Vector3 {
	float x, y, z;
};
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);
Matrix4x4 MakeRotataXMatrix(float radian);
Matrix4x4 MakeRotataYMatrix(float radian);
Matrix4x4 MakeRotataZMatrix(float radian);

Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate);


static const int kColumnWidth = 60;
static const int kRowHeight = 20;


void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* laber);