#include "MathStuffLib.h"
#include "math.h"
namespace MathFuncs
{
	// Vector2
	// vectorA + vectorB
	Vector2 Vector2::operator+ (Vector2& Other)
	{
		Vector2 temp;
		temp.x = x + Other.x;
		temp.y = y + Other.y;
		return temp;
	}
	Vector2 Vector2::operator- (Vector2& Other)
	{
		Vector2 temp;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		return temp;
	}
	Vector2 Vector2::operator= (Vector2& Other)
	{
		x = Other.x;
		y = Other.y;
		return *this;
	}
	bool Vector2::operator== (Vector2& Other)
	{
		if (x == Other.x)
		{
			
		}
		else
		{
			return false;
		}
		if (y == Other.y)
		{

		}
		else
		{
			return false;
		}
		return true;
	}
	Vector2 Vector2::operator* (float& Other)
	{
		Vector2 temp;
		temp.x = x * Other;
		temp.y = y * Other;
		return temp;
	}
	float Vector2::dotProduct(Vector2& Other)
	{
		return x * Other.x + y * Other.y;
	}
	float Vector2::Magnitude()
	{
		return sqrt(x * x + y * y);
	}
	Vector2 Vector2::linearInterpolation(Vector2& Other, float t)
	{
		return (*this) + ((Other - *this) * t);
	}
	Vector2 Vector2::normalize()
	{
		Vector2 other;
		other.x = x / Magnitude();
		other.y = y / Magnitude();
		return other;
	}
	//Vector3
	Vector3 Vector3::operator+ (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x + Other.x;
		temp.y = y + Other.y;
		temp.z = z + Other.z;
		temp.m = sqrt(((x)+(y)+(z)) * 2);
		return temp;
	}
	Vector3 Vector3::operator- (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		temp.z = z - Other.z;
		temp.m = sqrt(((x)+(y)+(z)) * 2);
		return temp;
	}
	Vector3 Vector3::operator= (Vector3& Other)
	{
		x = Other.x;
		y = Other.y;
		z = Other.z;
		return *this;
	}
	bool Vector3::operator== (Vector3& Other)
	{
		if (x == Other.x)
		{

		}
		else
		{
			return false;
		}
		if (y == Other.y)
		{

		}
		else
		{
			return false;
		}
		if (z == Other.z)
		{

		}
		else
		{
			return false;
		}
		return true;
	}
	Vector3 Vector3::crossProduct(Vector3& Other)
	{
		Vector3 temp;
		temp.x = y * Other.z - z * Other.y;
		temp.y = z * Other.x - x * Other.z;
		temp.z = x * Other.y - y * Other.x;
		return temp;
	}
	float Vector3::dotProduct(Vector3& Other)
	{
		return x * Other.x + y * Other.y + z * Other.z;
	}
	float Vector3::Magnitude(Vector3& Other)
	{
		return sqrt(x * x + y * y);
	}
	Vector3 Vector3::operator* (float& Other)
	{
		Vector3 temp;
		temp.x = x * Other;
		temp.y = y * Other;
		temp.z = z * Other;
		return temp;
	}
	Vector3 Vector3::linearInterpolation(Vector3& Other, float t)
	{
		return (*this) + ((Other - *this) * t);
	}
	//Vector4
	Vector4 Vector4::operator+ (Vector4& Other)
	{
		Vector4 temp;
		temp.w = w + Other.w;
		temp.x = x + Other.x;
		temp.y = y + Other.y;
		temp.z = z + Other.z;
		return temp;
	}
	Vector4 Vector4::operator- (Vector4& Other)
	{
		Vector4 temp;
		temp.w = w - Other.w;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		temp.z = z - Other.z;
		return temp;
	}
	Vector4 Vector4::operator* (Vector4& Other)
	{
		Vector4 temp;
		temp.w = w * Other.w;
		temp.x = x * Other.x;
		temp.y = y * Other.y;
		temp.z = z * Other.z;
		return temp;
	}
	Vector4 matrix4::transformVector(Vector4 other)
	{
		Vector4 temp;
		temp.x = other.x * matrix[0][0] + other.y * matrix[1][0] + other.z * matrix[2][0] + other.w * matrix[3][0];
		temp.y = other.x * matrix[0][1] + other.y * matrix[1][1] + other.z * matrix[2][1] + other.w * matrix[3][1];
		temp.z = other.x * matrix[0][2] + other.y * matrix[1][2] + other.z * matrix[2][2] + other.w * matrix[3][2];
		temp.w = other.x * matrix[0][3] + other.y * matrix[1][3] + other.z * matrix[2][3] + other.w * matrix[3][3];
		return temp;
	}
	//Matrix 3x3
	matrix3 matrix3::operator +(matrix3 other)
	{
		matrix3 temp;
		temp.matrix[0][0] = matrix[0][0] + other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] + other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] + other.matrix[0][2];
		temp.matrix[1][0] = matrix[1][0] + other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] + other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] + other.matrix[1][2];
		temp.matrix[2][0] = matrix[2][0] + other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] + other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] + other.matrix[2][2];
		return temp;
	}
	matrix3 matrix3::operator -(matrix3 other)
	{
		matrix3 temp;
		temp.matrix[0][0] = matrix[0][0] - other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] - other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] - other.matrix[0][2];
		temp.matrix[1][0] = matrix[1][0] - other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] - other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] - other.matrix[1][2];
		temp.matrix[2][0] = matrix[2][0] - other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] - other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] - other.matrix[2][2];
		return temp;
	}
	matrix3 matrix3::operator *(matrix3 other)
	{
		matrix3 temp;
		temp.matrix[0][0] = (matrix[0][0] * other.matrix[0][0]) + (matrix[0][1] * other.matrix[1][0]) + (matrix[0][2] * other.matrix[2][0]);
		temp.matrix[0][1] = (matrix[0][0] * other.matrix[0][1]) + (matrix[0][1] * other.matrix[1][1]) + (matrix[0][2] * other.matrix[2][1]);
		temp.matrix[0][2] = (matrix[0][0] * other.matrix[0][2]) + (matrix[0][1] * other.matrix[1][2]) + (matrix[0][2] * other.matrix[2][2]);
		temp.matrix[1][0] = (matrix[1][0] * other.matrix[0][0]) + (matrix[1][1] * other.matrix[1][0]) + (matrix[1][2] * other.matrix[2][0]);
		temp.matrix[1][1] = (matrix[1][0] * other.matrix[0][1]) + (matrix[1][1] * other.matrix[1][1]) + (matrix[1][2] * other.matrix[2][1]);
		temp.matrix[1][2] = (matrix[1][0] * other.matrix[0][2]) + (matrix[1][1] * other.matrix[1][2]) + (matrix[1][2] * other.matrix[2][2]);
		temp.matrix[2][0] = (matrix[2][0] * other.matrix[0][0]) + (matrix[2][1] * other.matrix[1][0]) + (matrix[2][2] * other.matrix[2][0]);
		temp.matrix[2][1] = (matrix[2][0] * other.matrix[0][1]) + (matrix[2][1] * other.matrix[1][1]) + (matrix[2][2] * other.matrix[2][1]);
		temp.matrix[2][2] = (matrix[2][0] * other.matrix[0][2]) + (matrix[2][1] * other.matrix[1][2]) + (matrix[2][2] * other.matrix[2][2]);
		return temp;
	}
	Vector3 matrix3::transformVector(Vector3 other)
	{
		Vector3 temp;
		temp.x = other.x * matrix[0][0] + other.y * matrix[1][0] + other.z * matrix[2][0];
		temp.y = other.x * matrix[0][1] + other.y * matrix[1][1] + other.z * matrix[2][1];
		temp.z = other.x * matrix[0][2] + other.y * matrix[1][2] + other.z * matrix[2][2];
		return temp;
	}
	matrix3 matrix3::rotationx(float angle)
	{
		matrix3 temp;
		temp.matrix[0][0] = 1;
		temp.matrix[0][1] = 0;
		temp.matrix[0][2] = 0;
		temp.matrix[1][0] = 0;
		temp.matrix[1][1] = cos(angle);
		temp.matrix[1][2] = sin(angle);
		temp.matrix[2][0] = 0;
		temp.matrix[2][1] = -sin(angle);
		temp.matrix[2][2] = cos(angle);
		return temp;
	}
	matrix3 matrix3::rotationy(float angle)
	{
		matrix3 temp;
		temp.matrix[0][0] = cos(angle);
		temp.matrix[0][1] = 0;
		temp.matrix[0][2] = -sin(angle);
		temp.matrix[1][0] = 0;
		temp.matrix[1][1] = 1;
		temp.matrix[1][2] = 0;
		temp.matrix[2][0] = sin(angle);
		temp.matrix[2][1] = 0;
		temp.matrix[2][2] = cos(angle);
		return temp;
	}
	matrix3 matrix3::rotationz(float angle)
	{
		matrix3 temp;
		temp.matrix[0][0] = cos(angle);
		temp.matrix[0][1] = sin(angle);
		temp.matrix[0][2] = 0;
		temp.matrix[1][0] = -sin(angle);
		temp.matrix[1][1] = cos(angle);
		temp.matrix[1][2] = 0;
		temp.matrix[2][0] = 0;
		temp.matrix[2][1] = 0;
		temp.matrix[2][2] = 1;
		return temp;
	}
	//Matrix 4x4
	matrix4 matrix4::operator +(matrix4 other)
	{
		matrix4 temp;
		temp.matrix[0][0] = matrix[0][0] + other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] + other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] + other.matrix[0][2];
		temp.matrix[0][3] = matrix[0][3] + other.matrix[0][3];
		temp.matrix[1][0] = matrix[1][0] + other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] + other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] + other.matrix[1][2];
		temp.matrix[1][3] = matrix[1][3] + other.matrix[1][3];
		temp.matrix[2][0] = matrix[2][0] + other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] + other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] + other.matrix[2][2];
		temp.matrix[2][3] = matrix[2][3] + other.matrix[2][3];
		temp.matrix[3][0] = matrix[3][0] + other.matrix[3][0];
		temp.matrix[3][1] = matrix[3][1] + other.matrix[3][1];
		temp.matrix[3][2] = matrix[3][2] + other.matrix[3][2];
		temp.matrix[3][3] = matrix[3][3] + other.matrix[3][3];
		return temp;
	}
	matrix4 matrix4::operator -(matrix4 other)
	{
		matrix4 temp;
		temp.matrix[0][0] = matrix[0][0] - other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] - other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] - other.matrix[0][2];
		temp.matrix[0][3] = matrix[0][3] - other.matrix[0][3];
		temp.matrix[1][0] = matrix[1][0] - other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] - other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] - other.matrix[1][2];
		temp.matrix[1][3] = matrix[1][3] - other.matrix[1][3];
		temp.matrix[2][0] = matrix[2][0] - other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] - other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] - other.matrix[2][2];
		temp.matrix[2][3] = matrix[2][3] - other.matrix[2][3];
		temp.matrix[3][0] = matrix[3][0] - other.matrix[3][0];
		temp.matrix[3][1] = matrix[3][1] - other.matrix[3][1];
		temp.matrix[3][2] = matrix[3][2] - other.matrix[3][2];
		temp.matrix[3][3] = matrix[3][3] - other.matrix[3][3];
		return temp;
	}
	matrix4 matrix4::operator *(matrix4 other)
	{
		matrix4 temp;
		temp.matrix[0][0] = (matrix[0][0] * other.matrix[0][0]) + (matrix[0][1] * other.matrix[1][0]) + (matrix[0][2] * other.matrix[2][0]) + (matrix[0][3] * other.matrix[3][0]);
		temp.matrix[0][1] = (matrix[0][0] * other.matrix[0][1]) + (matrix[0][1] * other.matrix[1][1]) + (matrix[0][2] * other.matrix[2][1]) + (matrix[0][3] * other.matrix[3][1]);
		temp.matrix[0][2] = (matrix[0][0] * other.matrix[0][2]) + (matrix[0][1] * other.matrix[1][2]) + (matrix[0][2] * other.matrix[2][2]) + (matrix[0][3] * other.matrix[3][2]);
		temp.matrix[0][3] = (matrix[0][0] * other.matrix[0][3]) + (matrix[0][1] * other.matrix[1][3]) + (matrix[0][2] * other.matrix[2][3]) + (matrix[0][3] * other.matrix[3][3]);
		temp.matrix[1][0] = (matrix[1][0] * other.matrix[0][0]) + (matrix[1][1] * other.matrix[1][0]) + (matrix[1][2] * other.matrix[2][0]) + (matrix[1][3] * other.matrix[3][0]);
		temp.matrix[1][1] = (matrix[1][0] * other.matrix[0][1]) + (matrix[1][1] * other.matrix[1][1]) + (matrix[1][2] * other.matrix[2][1]) + (matrix[1][3] * other.matrix[3][1]);
		temp.matrix[1][2] = (matrix[1][0] * other.matrix[0][2]) + (matrix[1][1] * other.matrix[1][2]) + (matrix[1][2] * other.matrix[2][2]) + (matrix[1][3] * other.matrix[3][2]);
		temp.matrix[1][3] = (matrix[1][0] * other.matrix[0][3]) + (matrix[1][1] * other.matrix[1][3]) + (matrix[1][2] * other.matrix[2][3]) + (matrix[1][3] * other.matrix[3][3]);
		temp.matrix[2][0] = (matrix[2][0] * other.matrix[0][0]) + (matrix[2][1] * other.matrix[1][0]) + (matrix[2][2] * other.matrix[2][0]) + (matrix[2][3] * other.matrix[3][0]);
		temp.matrix[2][1] = (matrix[2][0] * other.matrix[0][1]) + (matrix[2][1] * other.matrix[1][1]) + (matrix[2][2] * other.matrix[2][1]) + (matrix[2][3] * other.matrix[3][1]);
		temp.matrix[2][2] = (matrix[2][0] * other.matrix[0][2]) + (matrix[2][1] * other.matrix[1][2]) + (matrix[2][2] * other.matrix[2][2]) + (matrix[2][3] * other.matrix[3][2]);
		temp.matrix[2][3] = (matrix[2][0] * other.matrix[0][3]) + (matrix[2][1] * other.matrix[1][3]) + (matrix[2][2] * other.matrix[2][3]) + (matrix[2][3] * other.matrix[3][3]);
		temp.matrix[3][0] = (matrix[3][0] * other.matrix[0][0]) + (matrix[3][1] * other.matrix[1][0]) + (matrix[3][2] * other.matrix[2][0]) + (matrix[3][3] * other.matrix[3][0]);
		temp.matrix[3][1] = (matrix[3][0] * other.matrix[0][1]) + (matrix[3][1] * other.matrix[1][1]) + (matrix[3][2] * other.matrix[2][1]) + (matrix[3][3] * other.matrix[3][1]);
		temp.matrix[3][2] = (matrix[3][0] * other.matrix[0][2]) + (matrix[3][1] * other.matrix[1][2]) + (matrix[3][2] * other.matrix[2][2]) + (matrix[3][3] * other.matrix[3][2]);
		temp.matrix[3][3] = (matrix[3][0] * other.matrix[0][3]) + (matrix[3][1] * other.matrix[1][3]) + (matrix[3][2] * other.matrix[2][3]) + (matrix[3][3] * other.matrix[3][3]);
		return temp;
	}

	float CommonMath::degreesToRadian(float degrees)
	{
		float returnNumber;
		
		// degrees to radian
		returnNumber = degrees * 3.14 / 180.0;

		return returnNumber;
	}
}