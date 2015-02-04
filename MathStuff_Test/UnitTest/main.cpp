#include <gtest\gtest.h>

#include <iostream>

#include <MathStuffLib.h>

using namespace MathFuncs;

TEST(demoTest, DemoFirstTest)
{
	//EXPECT_TRUE(true);
	//EXPECT_EQ()
	//EXPECT_FLOAT_EQ()
}

TEST(Vector2, Equal)
{
	Vector2 left;
	left.x = 1;
	left.y = 1;

	Vector2 right;
	right.x = 1;
	right.y = 1;

	Vector2 expected;
	expected.x = 1;
	expected.y = 1;

	Vector2 actual = left = right;

	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
}

TEST(Vector2, dotProduct)
{
	Vector2 left;
	left.x = 2;
	left.y = 3;

	Vector2 right;
	right.x = 3;
	right.y = 4;

	float expected;
	expected = 18;

	float actual = left.dotProduct(right);

	EXPECT_TRUE(actual == expected);
}

TEST(Vector2, Magnitude)
{
	Vector2 left;
	left.x = 3;
	left.y = 4;

	float expected;
	expected = 5;

	float actual = left.Magnitude();
	
	EXPECT_TRUE(actual == expected);
}

TEST(Vector2, linearInterpolation)
{
	Vector2 left;
	left.x = 0;
	left.y = 0;

	Vector2 right;
	right.x = 0;
	right.y = 1;

	Vector2 expected;
	expected.x = 0;
	expected.y = 0.5;

	Vector2 actual = left.linearInterpolation(right, 0.5);

	EXPECT_TRUE(actual == expected);
}

TEST(Vector2, normalize)
{
	Vector2 left;
	left.x = 3;
	left.y = 4;

	Vector2 expected;
	expected.x = 0.6;
	expected.y = 0.8;

	Vector2 actual = left.normalize();

	EXPECT_TRUE(actual == expected);
}

TEST(Vector2, Addition)
{
	Vector2 left;
	left.x = 1;
	left.y = 2;
	Vector2 right;
	right.x = 1;
	right.y = 3;

	Vector2 expected;
	expected.x = 2;
	expected.y = 5;

	Vector2 actual = left + right;

	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
}

TEST(Vector2, Subtract)
{
	Vector2 left;
	left.x = 1;
	left.y = 2;
	Vector2 right;
	right.x = 1;
	right.y = 3;

	Vector2 expected;
	expected.x = 0;
	expected.y = -1;

	Vector2 actual = left - right;

	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
}

TEST(Vector3, CrossProduct)
{
	Vector3 left;
	left.x = 5;
	left.y = 3;
	left.z = 4;

	Vector3 right;
	right.x = 5;
	right.y = 3;
	right.z = 7;

	Vector3 expected;
	expected.x = 9;
	expected.y = -15;
	expected.z = 0;

	Vector3 actual = left.crossProduct(right);

	EXPECT_TRUE(actual == expected);
}

TEST(Vector3, Addition)
{
	Vector3 left;
	left.x = 1;
	left.y = 2;
	left.z = 3;
	Vector3 right;
	right.x = 1;
	right.y = 3;
	right.z = 5;

	Vector3 expected;
	expected.x = 2;
	expected.y = 5;
	expected.z = 8;

	Vector3 actual = left + right;

	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
	EXPECT_TRUE(actual.z == expected.z);
}

TEST(Vector3, Subtraction)
{
	Vector3 left;
	left.x = 1;
	left.y = 2;
	left.z = 3;
	Vector3 right;
	right.x = 1;
	right.y = 3;
	right.z = 5;

	Vector3 expected;
	expected.x = 0;
	expected.y = -1;
	expected.z = -2;

	Vector3 actual = left - right;

	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
	EXPECT_TRUE(actual.z == expected.z);
}

TEST(Vector3, Equal)
{
	Vector3 left;
	left.x = 1;
	left.y = 1;
	left.z = 1;

	Vector3 right;
	right.x = 1;
	right.y = 1;
	right.z = 1;

	Vector3 expected;
	expected.x = 1;
	expected.y = 1;
	expected.z = 1;

	Vector3 actual = left = right;

	EXPECT_TRUE(actual == expected);
}

TEST(Vector3, dotProduct)
{
	Vector3 left;
	left.x = 2;
	left.y = 3;
	left.z = 1;

	Vector3 right;
	right.x = 3;
	right.y = 4;
	right.z = 1;

	float expected;
	expected = 19;

	float actual = left.dotProduct(right);

	EXPECT_TRUE(actual == expected);
}

TEST(Vector3, magnitude)
{
	Vector3 left;
	left.x = 6;
	left.y = 7;
	left.z = 6;

	float expected;
	expected = 11;

	float actual = left.Magnitude();

	EXPECT_TRUE(actual == expected);
}

TEST(Vector3, linearInterpolation)
{
	Vector3 left;
	left.x = 0;
	left.y = 0;
	left.z = 0;

	Vector3 right;
	right.x = 0;
	right.y = 1;
	right.z = 0;

	Vector3 expected;
	expected.x = 0;
	expected.y = 0.5;
	expected.z = 0;

	Vector3 actual = left.linearInterpolation(right, 0.5);

	EXPECT_TRUE(actual == expected);
}

TEST(Vector3, normalize)
{
	Vector3 left;
	left.x = 0;
	left.y = 0;
	left.z = 1;

	Vector3 expected;
	expected.x = 0;
	expected.y = 0;
	expected.z = 1;

	Vector3 actual = left.normalize();

	EXPECT_TRUE(actual == expected);
}

TEST(Vector4, Addition)
{
	Vector4 left;
	left.w = 1;
	left.x = 2;
	left.y = 3;
	left.z = 4;
	Vector4 right;
	right.w = 4;
	right.x = 3;
	right.y = 2;
	right.z = 1;

	Vector4 expected;
	expected.w = 5;
	expected.x = 5;
	expected.y = 5;
	expected.z = 5;

	Vector4 actual = left + right;

	EXPECT_TRUE(actual.w == expected.w);
	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
	EXPECT_TRUE(actual.z == expected.z);
}

TEST(Vector4, Subtraction)
{
	Vector4 left;
	left.w = 1;
	left.x = 2;
	left.y = 3;
	left.z = 4;
	Vector4 right;
	right.w = 4;
	right.x = 3;
	right.y = 2;
	right.z = 1;

	Vector4 expected;
	expected.w = -3;
	expected.x = -1;
	expected.y = 1;
	expected.z = 3;

	Vector4 actual = left - right;

	EXPECT_TRUE(actual.w == expected.w);
	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
	EXPECT_TRUE(actual.z == expected.z);
}

TEST(Vector4, Magnitude)
{
	Vector4 left;
	left.x = 0;
	left.y = 0;
	left.z = 0;
	left.w = 1;

	float expected;
	expected = 1;

	float actual = left.Magnitude();

	EXPECT_TRUE(actual == expected);
}

TEST(Vector4, normalize)
{
	Vector4 left;
	left.x = 1;
	left.y = 1;
	left.z = 1;
	left.w = 1;

	Vector4 expected;
	expected.x = .5;
	expected.y = .5;
	expected.z = .5;
	expected.w = .5;

	Vector4 actual = left.normalize();

	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
	EXPECT_TRUE(actual.z == expected.z);
	EXPECT_TRUE(actual.w == expected.w);
}

TEST(Vector4, Hexadex)
{
	Vector4 rgba;
	rgba.hexadex(0xFFFFFFFF);

	Vector4 expected;
	expected.x = 1;
	expected.y = 1;
	expected.z = 1;
	expected.w = 1;

	EXPECT_TRUE(rgba.x == expected.x);
	EXPECT_TRUE(rgba.y == expected.y);
	EXPECT_TRUE(rgba.z == expected.z);
	EXPECT_TRUE(rgba.w == expected.w);
}

TEST(matrix3, Addition)
{
	matrix3 left;
	left.matrix[0][0] = 0;
	left.matrix[0][1] = 1;
	left.matrix[0][2] = 2;
	left.matrix[1][0] = 1;
	left.matrix[1][1] = 3;
	left.matrix[1][2] = 4;
	left.matrix[2][0] = 2;
	left.matrix[2][1] = 3;
	left.matrix[2][2] = 2;

	matrix3 right;
	right.matrix[0][0] = 2;
	right.matrix[0][1] = 4;
	right.matrix[0][2] = 3;
	right.matrix[1][0] = 2;
	right.matrix[1][1] = 2;
	right.matrix[1][2] = 0;
	right.matrix[2][0] = 2;
	right.matrix[2][1] = 3;
	right.matrix[2][2] = 1;

	matrix3 expected;
	expected.matrix[0][0] = 2;
	expected.matrix[0][1] = 5;
	expected.matrix[0][2] = 5;
	expected.matrix[1][0] = 3;
	expected.matrix[1][1] = 5;
	expected.matrix[1][2] = 4;
	expected.matrix[2][0] = 4;
	expected.matrix[2][1] = 6;
	expected.matrix[2][2] = 3;

	matrix3 actual = left + right;

	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
}

TEST(matrix3, Subtraction)
{
	matrix3 left;
	left.matrix[0][0] = 0;
	left.matrix[0][1] = 1;
	left.matrix[0][2] = 2;
	left.matrix[1][0] = 1;
	left.matrix[1][1] = 3;
	left.matrix[1][2] = 4;
	left.matrix[2][0] = 2;
	left.matrix[2][1] = 3;
	left.matrix[2][2] = 2;

	matrix3 right;
	right.matrix[0][0] = 2;
	right.matrix[0][1] = 4;
	right.matrix[0][2] = 3;
	right.matrix[1][0] = 2;
	right.matrix[1][1] = 2;
	right.matrix[1][2] = 0;
	right.matrix[2][0] = 2;
	right.matrix[2][1] = 3;
	right.matrix[2][2] = 1;

	matrix3 expected;
	expected.matrix[0][0] = -2;
	expected.matrix[0][1] = -3;
	expected.matrix[0][2] = -1;
	expected.matrix[1][0] = -1;
	expected.matrix[1][1] = 1;
	expected.matrix[1][2] = 4;
	expected.matrix[2][0] = 0;
	expected.matrix[2][1] = 0;
	expected.matrix[2][2] = 1;

	matrix3 actual = left - right;

	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
}

TEST(matrix3, Multiply)
{
	matrix3 left;
	left.matrix[0][0] = 0;
	left.matrix[0][1] = 1;
	left.matrix[0][2] = 2;
	left.matrix[1][0] = 1;
	left.matrix[1][1] = 3;
	left.matrix[1][2] = 4;
	left.matrix[2][0] = 2;
	left.matrix[2][1] = 3;
	left.matrix[2][2] = 2;

	matrix3 right;
	right.matrix[0][0] = 2;
	right.matrix[0][1] = 4;
	right.matrix[0][2] = 3;
	right.matrix[1][0] = 2;
	right.matrix[1][1] = 2;
	right.matrix[1][2] = 0;
	right.matrix[2][0] = 2;
	right.matrix[2][1] = 3;
	right.matrix[2][2] = 1;

	matrix3 expected;
	expected.matrix[0][0] = 6;
	expected.matrix[0][1] = 8;
	expected.matrix[0][2] = 2;
	expected.matrix[1][0] = 16;
	expected.matrix[1][1] = 22;
	expected.matrix[1][2] = 7;
	expected.matrix[2][0] = 14;
	expected.matrix[2][1] = 20;
	expected.matrix[2][2] = 8;

	matrix3 actual = left * right;

	//fix everything past 0, 1
	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
	
}

TEST(Vector3, transformVector)
{
	Vector3 left;
	left.x = 3;
	left.y = 2;
	left.z = 1;

	matrix3 right;
	right.matrix[0][0] = 1;
	right.matrix[0][1] = 2;
	right.matrix[0][2] = 3;
	right.matrix[1][0] = 2;
	right.matrix[1][1] = 1;
	right.matrix[1][2] = 2;
	right.matrix[2][0] = 3;
	right.matrix[2][1] = 2;
	right.matrix[2][2] = 1;

	Vector3 expected;
	expected.x = 10;
	expected.y = 10;
	expected.z = 14;
	
	Vector3 actual = right.transformVector(left);

	EXPECT_TRUE(actual.x == expected.x);
	EXPECT_TRUE(actual.y == expected.y);
	EXPECT_TRUE(actual.z == expected.z);
}

TEST(matrix3, rotationx)
{
	matrix3 left;
	left = left.rotationx(CommonMath::degreesToRadian(90.f));

	Vector3 point;
	point.x = 0;
	point.y = 1;
	point.z = 0;

	point = left.transformVector(point);

	Vector3 expected;
	expected.x = 0;
	expected.y = 0;
	expected.z = 1;

	EXPECT_TRUE(point == expected);
}

TEST(matrix3, rotationy)
{
	matrix3 left;
	left = left.rotationy(CommonMath::degreesToRadian(90.f));

	Vector3 point;
	point.x = 1;
	point.y = 0;
	point.z = 0;

	point = left.transformVector(point);

	Vector3 expected;
	expected.x = 0;
	expected.y = 0;
	expected.z = -1;

	EXPECT_TRUE(point == expected);
}

TEST(matrix3, rotationz)
{
	matrix3 left;
	left = left.rotationz(CommonMath::degreesToRadian(90.f));

	Vector3 point;
	point.x = 1;
	point.y = 0;
	point.z = 0;

	point = left.transformVector(point);

	Vector3 expected;
	expected.x = 0;
	expected.y = 1;
	expected.z = 0;

	EXPECT_TRUE(point == expected);
}

TEST(matrix4, Addition)
{
	matrix4 left;
	left.matrix[0][0] = 0;
	left.matrix[0][1] = 1;
	left.matrix[0][2] = 2;
	left.matrix[0][3] = 4;
	left.matrix[1][0] = 1;
	left.matrix[1][1] = 3;
	left.matrix[1][2] = 4;
	left.matrix[1][3] = 5;
	left.matrix[2][0] = 2;
	left.matrix[2][1] = 3;
	left.matrix[2][2] = 2;
	left.matrix[2][3] = 6;
	left.matrix[3][0] = 4;
	left.matrix[3][1] = 2;
	left.matrix[3][2] = 1;
	left.matrix[3][3] = 3;

	matrix4 right;
	right.matrix[0][0] = 2;
	right.matrix[0][1] = 4;
	right.matrix[0][2] = 3;
	right.matrix[0][3] = 2;
	right.matrix[1][0] = 2;
	right.matrix[1][1] = 2;
	right.matrix[1][2] = 0;
	right.matrix[1][3] = 1;
	right.matrix[2][0] = 2;
	right.matrix[2][1] = 3;
	right.matrix[2][2] = 1;
	right.matrix[2][3] = 4;
	right.matrix[3][0] = 4;
	right.matrix[3][1] = 2;
	right.matrix[3][2] = 1;
	right.matrix[3][3] = 3;

	matrix4 expected;
	expected.matrix[0][0] = 2;
	expected.matrix[0][1] = 5;
	expected.matrix[0][2] = 5;
	expected.matrix[0][3] = 6;
	expected.matrix[1][0] = 3;
	expected.matrix[1][1] = 5;
	expected.matrix[1][2] = 4;
	expected.matrix[1][3] = 6;
	expected.matrix[2][0] = 4;
	expected.matrix[2][1] = 6;
	expected.matrix[2][2] = 3;
	expected.matrix[2][3] = 10;
	expected.matrix[3][0] = 8;
	expected.matrix[3][1] = 4;
	expected.matrix[3][2] = 2;
	expected.matrix[3][3] = 6;

	matrix4 actual = left + right;

	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
}

TEST(matrix4, Subtraction)
{
	matrix4 left;
	left.matrix[0][0] = 0;
	left.matrix[0][1] = 1;
	left.matrix[0][2] = 2;
	left.matrix[0][3] = 4;
	left.matrix[1][0] = 1;
	left.matrix[1][1] = 3;
	left.matrix[1][2] = 4;
	left.matrix[1][3] = 5;
	left.matrix[2][0] = 2;
	left.matrix[2][1] = 3;
	left.matrix[2][2] = 2;
	left.matrix[2][3] = 6;
	left.matrix[3][0] = 4;
	left.matrix[3][1] = 2;
	left.matrix[3][2] = 1;
	left.matrix[3][3] = 3;

	matrix4 right;
	right.matrix[0][0] = 2;
	right.matrix[0][1] = 4;
	right.matrix[0][2] = 3;
	right.matrix[0][3] = 2;
	right.matrix[1][0] = 2;
	right.matrix[1][1] = 2;
	right.matrix[1][2] = 0;
	right.matrix[1][3] = 1;
	right.matrix[2][0] = 2;
	right.matrix[2][1] = 3;
	right.matrix[2][2] = 1;
	right.matrix[2][3] = 4;
	right.matrix[3][0] = 4;
	right.matrix[3][1] = 2;
	right.matrix[3][2] = 1;
	right.matrix[3][3] = 3;

	matrix4 expected;
	expected.matrix[0][0] = -2;
	expected.matrix[0][1] = -3;
	expected.matrix[0][2] = -1;
	expected.matrix[0][3] = 2;
	expected.matrix[1][0] = -1;
	expected.matrix[1][1] = 1;
	expected.matrix[1][2] = 4;
	expected.matrix[1][3] = 4;
	expected.matrix[2][0] = 0;
	expected.matrix[2][1] = 0;
	expected.matrix[2][2] = 1;
	expected.matrix[2][3] = 2;
	expected.matrix[3][0] = 0;
	expected.matrix[3][1] = 0;
	expected.matrix[3][2] = 0;
	expected.matrix[3][3] = 0;

	matrix4 actual = left - right;

	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
}

TEST(matrix4, multiply)
{
	matrix4 left;
	left.matrix[0][0] = 0;
	left.matrix[0][1] = 1;
	left.matrix[0][2] = 2;
	left.matrix[0][3] = 4;
	left.matrix[1][0] = 1;
	left.matrix[1][1] = 3;
	left.matrix[1][2] = 4;
	left.matrix[1][3] = 5;
	left.matrix[2][0] = 2;
	left.matrix[2][1] = 3;
	left.matrix[2][2] = 2;
	left.matrix[2][3] = 6;
	left.matrix[3][0] = 4;
	left.matrix[3][1] = 2;
	left.matrix[3][2] = 1;
	left.matrix[3][3] = 3;

	matrix4 right;
	right.matrix[0][0] = 2;
	right.matrix[0][1] = 4;
	right.matrix[0][2] = 3;
	right.matrix[0][3] = 2;
	right.matrix[1][0] = 2;
	right.matrix[1][1] = 2;
	right.matrix[1][2] = 0;
	right.matrix[1][3] = 1;
	right.matrix[2][0] = 2;
	right.matrix[2][1] = 3;
	right.matrix[2][2] = 1;
	right.matrix[2][3] = 4;
	right.matrix[3][0] = 4;
	right.matrix[3][1] = 2;
	right.matrix[3][2] = 1;
	right.matrix[3][3] = 3;

	matrix4 expected;
	expected.matrix[0][0] = 22;
	expected.matrix[0][1] = 16;
	expected.matrix[0][2] = 6;
	expected.matrix[0][3] = 21;
	expected.matrix[1][0] = 36;
	expected.matrix[1][1] = 32;
	expected.matrix[1][2] = 12;
	expected.matrix[1][3] = 36;
	expected.matrix[2][0] = 38;
	expected.matrix[2][1] = 32;
	expected.matrix[2][2] = 14;
	expected.matrix[2][3] = 33;
	expected.matrix[3][0] = 26;
	expected.matrix[3][1] = 29;
	expected.matrix[3][2] = 16;
	expected.matrix[3][3] = 23;

	matrix4 actual = left * right;

	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
}

TEST(matrix4, ortho)
{
	matrix4 actual;
	actual = actual.ortho(1, 0, 1, 0, 1, 0);

	matrix4 expected;
	expected.matrix[0][0] = 2;
	expected.matrix[0][1] = 0;
	expected.matrix[0][2] = 0;
	expected.matrix[0][3] = -1;
	expected.matrix[1][0] = 0;
	expected.matrix[1][1] = 2;
	expected.matrix[1][2] = 0;
	expected.matrix[1][3] = -1;
	expected.matrix[2][0] = 0;
	expected.matrix[2][1] = 0;
	expected.matrix[2][2] = -2;
	expected.matrix[2][3] = -1;
	expected.matrix[3][0] = 0;
	expected.matrix[3][1] = 0;
	expected.matrix[3][2] = 0;
	expected.matrix[3][3] = 1;

	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
}

TEST(matrix4, scale)
{
	Vector3 right;
	right.x = 1;
	right.y = 1;
	right.z = 1;
	
	matrix4 expected;
	expected.matrix[0][0] = 1;
	expected.matrix[0][1] = 0;
	expected.matrix[0][2] = 0;
	expected.matrix[0][3] = 0;

	expected.matrix[1][0] = 0;
	expected.matrix[1][1] = 1;
	expected.matrix[1][2] = 0;
	expected.matrix[1][3] = 0;

	expected.matrix[2][0] = 0;
	expected.matrix[2][1] = 0;
	expected.matrix[2][2] = 1;
	expected.matrix[2][3] = 0;

	expected.matrix[3][0] = 0;
	expected.matrix[3][1] = 0;
	expected.matrix[3][2] = 0;
	expected.matrix[3][3] = 1;

	matrix4 actual = actual.scale(right);

	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
}

TEST(CommonMath, degreesToRadian)
{
	float radians = CommonMath::degreesToRadian(90);

	float actual = 1.57000005;

	EXPECT_FLOAT_EQ(radians, actual);
}

TEST(CommonMath, radiansToDegrees)
{
	float radians = CommonMath::radianToDegrees(3.14);

	float actual = 180;

	EXPECT_FLOAT_EQ(radians, actual);
}

TEST(CommonMath, scalarInterpolation)
{
	static float actual = CommonMath::linearInterpolation(0, 2, 1);

	EXPECT_FLOAT_EQ(actual, 2);
}

TEST(CommonMath, testPowerOfTwo)
{
	float pon = 8;

	float actual = CommonMath::testValueOf2(8);

	EXPECT_FLOAT_EQ(pon, actual);
}

int main(int argc, char * argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	int result = RUN_ALL_TESTS();

	std::cin.get();

	return result;
}