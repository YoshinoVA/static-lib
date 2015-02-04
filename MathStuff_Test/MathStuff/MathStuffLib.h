#pragma once

namespace MathFuncs
{
	class Vector2
	{
	public:
		// 2 numbers direction
		float x;
		float y;
		
		float dotProduct(Vector2& Other);
		float Magnitude();
		Vector2 linearInterpolation(Vector2& Other, float t);

		Vector2 operator+ (Vector2& Other);
		Vector2 operator- (Vector2& Other);
		Vector2 operator= (Vector2& Other);
		bool operator== (Vector2& Other);
		Vector2 operator* (float& Other);
		Vector2 normalize();
	};
	class Vector3
	{
	public:
		float x;
		float y;
		float z;

		Vector3 crossProduct(Vector3& Other);
		float dotProduct(Vector3& Other);
		float Magnitude();
		Vector3 linearInterpolation(Vector3& Other, float t);
		Vector3 normalize();
		Vector3 operator+ (Vector3& Other);
		Vector3 operator- (Vector3& Other);
		Vector3 operator* (Vector3& Other);
		Vector3 operator= (Vector3& Other);
		bool operator== (Vector3& Other);
		Vector3 operator* (float& Other);
	};

	class Vector4
	{
	public:
		float w;
		float x;
		float y;
		float z;

		Vector4 operator+ (Vector4& Other);
		Vector4 operator- (Vector4& Other);
		float Magnitude();
		Vector4 normalize();
		Vector4 hexadex(unsigned int color);
	};
	class matrix3
	{
	public:
		//matrix3();
		float matrix[3][3];
		// Vector4 position;
		// position.x = 5.f;
		// matrix[0][0] = position.x;

		matrix3 operator +(matrix3 other);
		matrix3 operator -(matrix3 other);
		matrix3 operator *(matrix3 other);
		Vector3 transformVector(Vector3 other);
		matrix3 rotationx (float angle);
		matrix3 rotationy (float angle);
		matrix3 rotationz (float angle);
		matrix3 scale(Vector3& other);
	};
	class matrix4
	{
	public:
		//matrix4();

		float matrix[4][4];

		matrix4 operator +(matrix4 m2);
		matrix4 operator -(matrix4 m2);
		matrix4 operator *(matrix4 m2);
		Vector4 transformVector(Vector4 other);
		matrix4 ortho(float r, float l, float n, float b, float t, float f);
		matrix4 rotationx(float angle);
		matrix4 rotationy(float angle);
		matrix4 rotationz(float angle);
		matrix4 scale(Vector3& other);
	};
	class CommonMath
	{
	public:
		
		static float degreesToRadian(float degrees);
		static float linearInterpolation(float left, float right, float t);
		static float testValueOf2(float other);
		static float radianToDegrees(float radians);
	};
}