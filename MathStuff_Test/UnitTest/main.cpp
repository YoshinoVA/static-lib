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
	
	Vector3 right;

	float expected;
	float actual = left.dotProduct(right);
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

TEST(Matrix3, Addition)
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

TEST(Matrix3, Subtraction)
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

TEST(Matrix3, Multiply)
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

//TEST(Matrix3, rotationx)
//{
//
//	matrix3 left;
//	left = left.rotationz(CommonMath::degreesToRadian(90.f));
//
//	matrix3 right;
//	right.matrix[0][0] = 1;
//	right.matrix[0][1] = 0;
//	right.matrix[0][2] = 0;
//
//	right.matrix[1][0] = 0;
//	right.matrix[1][1] = 0;
//	right.matrix[1][2] = 0;
//
//	right.matrix[2][0] = 0;
//	right.matrix[2][1] = 0;
//	right.matrix[2][2] = 0;
//
//	matrix3 expected;
//	expected.matrix[0][0] = 0;
//	expected.matrix[0][1] = 0;
//	expected.matrix[0][2] = 0;
//
//	expected.matrix[1][0] = 0;
//	expected.matrix[1][1] = 1;
//	expected.matrix[1][2] = 0;
//
//	expected.matrix[2][0] = 0;
//	expected.matrix[2][1] = 0;
//	expected.matrix[2][2] = 0;
//
//	matrix3 actual = left * right;
//
//	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
//	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
//	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
//	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
//	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
//	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
//	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
//	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
//	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
//}
//
//TEST(Matrix3, rotationy)
//{
//
//	matrix3 left;
//	left = left.rotationx(CommonMath::degreesToRadian(90.f));
//
//	matrix3 right;
//	right.matrix[0][0] = 0;
//	right.matrix[0][1] = 0;
//	right.matrix[0][2] = 0;
//
//	right.matrix[1][0] = 0;
//	right.matrix[1][1] = 1;
//	right.matrix[1][2] = 0;
//
//	right.matrix[2][0] = 0;
//	right.matrix[2][1] = 0;
//	right.matrix[2][2] = 0;
//
//	matrix3 expected;
//	expected.matrix[0][0] = 0;
//	expected.matrix[0][1] = 0;
//	expected.matrix[0][2] = 0;
//
//	expected.matrix[1][0] = 0;
//	expected.matrix[1][1] = 0;
//	expected.matrix[1][2] = 0;
//
//	expected.matrix[2][0] = 0;
//	expected.matrix[2][1] = 0;
//	expected.matrix[2][2] = 1;
//
//	matrix3 actual = left * right;
//
//	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
//	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
//	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
//	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
//	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
//	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
//	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
//	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
//	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
//}
//
//TEST(Matrix3, rotationz)
//{
//
//	matrix3 left;
//	left = left.rotationy(CommonMath::degreesToRadian(90.f));
//
//	matrix3 right;
//	right.matrix[0][0] = 0;
//	right.matrix[0][1] = 0;
//	right.matrix[0][2] = 0;
//
//	right.matrix[1][0] = 0;
//	right.matrix[1][1] = 0;
//	right.matrix[1][2] = 0;
//
//	right.matrix[2][0] = 0;
//	right.matrix[2][1] = 0;
//	right.matrix[2][2] = 1;
//
//	matrix3 expected;
//	expected.matrix[0][0] = 1;
//	expected.matrix[0][1] = 0;
//	expected.matrix[0][2] = 0;
//
//	expected.matrix[1][0] = 0;
//	expected.matrix[1][1] = 0;
//	expected.matrix[1][2] = 0;
//
//	expected.matrix[2][0] = 0;
//	expected.matrix[2][1] = 0;
//	expected.matrix[2][2] = 0;
//
//	matrix3 actual = left * right;
//
//	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
//	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
//	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
//	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
//	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
//	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
//	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
//	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
//	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
//}

//TEST(Matrix4, Addition)
//{
//	matrix4 left;
//	left.matrix[0][0] = 0;
//	left.matrix[0][1] = 1;
//	left.matrix[0][2] = 2;
//	left.matrix[0][3] = 4;
//	left.matrix[1][0] = 1;
//	left.matrix[1][1] = 3;
//	left.matrix[1][2] = 4;
//	left.matrix[1][3] = 5;
//	left.matrix[2][0] = 2;
//	left.matrix[2][1] = 3;
//	left.matrix[2][2] = 2;
//	left.matrix[2][3] = 6;
//	left.matrix[3][0] = 4;
//	left.matrix[3][1] = 2;
//	left.matrix[3][2] = 1;
//	left.matrix[3][3] = 3;
//
//	matrix4 right;
//	right.matrix[0][0] = 2;
//	right.matrix[0][1] = 4;
//	right.matrix[0][2] = 3;
//	right.matrix[0][3] = 2;
//	right.matrix[1][0] = 2;
//	right.matrix[1][1] = 2;
//	right.matrix[1][2] = 0;
//	right.matrix[1][3] = 1;
//	right.matrix[2][0] = 2;
//	right.matrix[2][1] = 3;
//	right.matrix[2][2] = 1;
//	right.matrix[2][3] = 4;
//	right.matrix[3][0] = 4;
//	right.matrix[3][1] = 2;
//	right.matrix[3][2] = 1;
//	right.matrix[3][3] = 3;
//
//	matrix4 expected;
//	expected.matrix[0][0] = 2;
//	expected.matrix[0][1] = 5;
//	expected.matrix[0][2] = 5;
//	expected.matrix[0][3] = 6;
//	expected.matrix[1][0] = 3;
//	expected.matrix[1][1] = 5;
//	expected.matrix[1][2] = 4;
//	expected.matrix[1][3] = 6;
//	expected.matrix[2][0] = 4;
//	expected.matrix[2][1] = 6;
//	expected.matrix[2][2] = 3;
//	expected.matrix[2][3] = 10;
//	expected.matrix[3][0] = 8;
//	expected.matrix[3][1] = 4;
//	expected.matrix[3][2] = 2;
//	expected.matrix[3][3] = 6;
//
//	matrix4 actual = left + right;
//
//	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
//	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
//	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
//	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
//	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
//	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
//	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
//	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
//	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
//	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
//	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
//	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
//	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
//	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
//	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
//	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
//}
//
//TEST(Matrix4, Subtraction)
//{
//	matrix4 left;
//	left.matrix[0][0] = 0;
//	left.matrix[0][1] = 1;
//	left.matrix[0][2] = 2;
//	left.matrix[0][3] = 4;
//	left.matrix[1][0] = 1;
//	left.matrix[1][1] = 3;
//	left.matrix[1][2] = 4;
//	left.matrix[1][3] = 5;
//	left.matrix[2][0] = 2;
//	left.matrix[2][1] = 3;
//	left.matrix[2][2] = 2;
//	left.matrix[2][3] = 6;
//	left.matrix[3][0] = 4;
//	left.matrix[3][1] = 2;
//	left.matrix[3][2] = 1;
//	left.matrix[3][3] = 3;
//
//	matrix4 right;
//	right.matrix[0][0] = 2;
//	right.matrix[0][1] = 4;
//	right.matrix[0][2] = 3;
//	right.matrix[0][3] = 2;
//	right.matrix[1][0] = 2;
//	right.matrix[1][1] = 2;
//	right.matrix[1][2] = 0;
//	right.matrix[1][3] = 1;
//	right.matrix[2][0] = 2;
//	right.matrix[2][1] = 3;
//	right.matrix[2][2] = 1;
//	right.matrix[2][3] = 4;
//	right.matrix[3][0] = 4;
//	right.matrix[3][1] = 2;
//	right.matrix[3][2] = 1;
//	right.matrix[3][3] = 3;
//
//	matrix4 expected;
//	expected.matrix[0][0] = -2;
//	expected.matrix[0][1] = -3;
//	expected.matrix[0][2] = -1;
//	expected.matrix[0][3] = 2;
//	expected.matrix[1][0] = -1;
//	expected.matrix[1][1] = 1;
//	expected.matrix[1][2] = 4;
//	expected.matrix[1][3] = 4;
//	expected.matrix[2][0] = 0;
//	expected.matrix[2][1] = 0;
//	expected.matrix[2][2] = 1;
//	expected.matrix[2][3] = 2;
//	expected.matrix[3][0] = 0;
//	expected.matrix[3][1] = 0;
//	expected.matrix[3][2] = 0;
//	expected.matrix[3][3] = 0;
//
//	matrix4 actual = left - right;
//
//	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
//	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
//	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
//	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
//	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
//	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
//	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
//	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
//	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
//	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
//	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
//	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
//	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
//	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
//	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
//	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
//}

//TEST(Matrix4, multiply)
//{
//	matrix4 left;
//	left.matrix[0][0] = 0;
//	left.matrix[0][1] = 1;
//	left.matrix[0][2] = 2;
//	left.matrix[0][3] = 4;
//	left.matrix[1][0] = 1;
//	left.matrix[1][1] = 3;
//	left.matrix[1][2] = 4;
//	left.matrix[1][3] = 5;
//	left.matrix[2][0] = 2;
//	left.matrix[2][1] = 3;
//	left.matrix[2][2] = 2;
//	left.matrix[2][3] = 6;
//	left.matrix[3][0] = 4;
//	left.matrix[3][1] = 2;
//	left.matrix[3][2] = 1;
//	left.matrix[3][3] = 3;
//
//	matrix4 right;
//	right.matrix[0][0] = 2;
//	right.matrix[0][1] = 4;
//	right.matrix[0][2] = 3;
//	right.matrix[0][3] = 2;
//	right.matrix[1][0] = 2;
//	right.matrix[1][1] = 2;
//	right.matrix[1][2] = 0;
//	right.matrix[1][3] = 1;
//	right.matrix[2][0] = 2;
//	right.matrix[2][1] = 3;
//	right.matrix[2][2] = 1;
//	right.matrix[2][3] = 4;
//	right.matrix[3][0] = 4;
//	right.matrix[3][1] = 2;
//	right.matrix[3][2] = 1;
//	right.matrix[3][3] = 3;
//
//	matrix4 expected;
//	expected.matrix[0][0] = 22;
//	expected.matrix[0][1] = 16;
//	expected.matrix[0][2] = 6;
//	expected.matrix[0][3] = 21;
//	expected.matrix[1][0] = 36;
//	expected.matrix[1][1] = 32;
//	expected.matrix[1][2] = 12;
//	expected.matrix[1][3] = 36;
//	expected.matrix[2][0] = 38;
//	expected.matrix[2][1] = 32;
//	expected.matrix[2][2] = 14;
//	expected.matrix[2][3] = 33;
//	expected.matrix[3][0] = 26;
//	expected.matrix[3][1] = 29;
//	expected.matrix[3][2] = 16;
//	expected.matrix[3][3] = 23;
//
//	matrix4 actual = left * right;
//
//	EXPECT_TRUE(actual.matrix[0][0] == expected.matrix[0][0]);
//	EXPECT_TRUE(actual.matrix[0][1] == expected.matrix[0][1]);
//	EXPECT_TRUE(actual.matrix[0][2] == expected.matrix[0][2]);
//	EXPECT_TRUE(actual.matrix[0][3] == expected.matrix[0][3]);
//	EXPECT_TRUE(actual.matrix[1][0] == expected.matrix[1][0]);
//	EXPECT_TRUE(actual.matrix[1][1] == expected.matrix[1][1]);
//	EXPECT_TRUE(actual.matrix[1][2] == expected.matrix[1][2]);
//	EXPECT_TRUE(actual.matrix[1][3] == expected.matrix[1][3]);
//	EXPECT_TRUE(actual.matrix[2][0] == expected.matrix[2][0]);
//	EXPECT_TRUE(actual.matrix[2][1] == expected.matrix[2][1]);
//	EXPECT_TRUE(actual.matrix[2][2] == expected.matrix[2][2]);
//	EXPECT_TRUE(actual.matrix[2][3] == expected.matrix[2][3]);
//	EXPECT_TRUE(actual.matrix[3][0] == expected.matrix[3][0]);
//	EXPECT_TRUE(actual.matrix[3][1] == expected.matrix[3][1]);
//	EXPECT_TRUE(actual.matrix[3][2] == expected.matrix[3][2]);
//	EXPECT_TRUE(actual.matrix[3][3] == expected.matrix[3][3]);
//}

int main(int argc, char * argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	int result = RUN_ALL_TESTS();

	std::cin.get();

	return result;
}