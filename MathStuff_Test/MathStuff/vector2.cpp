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
		if (abs(x - Other.x) < 0.001)
		{
			
		}
		else
		{
			return false;
		}
		if (abs(y - Other.y) < 0.001)
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
		return temp;
	}
	Vector3 Vector3::operator- (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		temp.z = z - Other.z;
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
		if (abs(x - Other.x) < 0.001)
		{

		}
		else
		{
			return false;
		}
		if (abs(y - Other.y) < 0.001)
		{

		}
		else
		{
			return false;
		}
		if (abs(z - Other.z) < 0.001)
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
	float Vector3::Magnitude()
	{
		return sqrt(x * x + y * y + z * z);
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
	Vector3 Vector3::normalize()
	{
		Vector3 other;
		other.x = x / Magnitude();
		other.y = y / Magnitude();
		other.z = z / Magnitude();
		return other;
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
	float Vector4::Magnitude()
	{
		return sqrt(x * x + y * y + z * z + w * w);
	}
	Vector4 Vector4::normalize()
	{
		Vector4 other;
		other.x = x / Magnitude();
		other.y = y / Magnitude();
		other.z = z / Magnitude();
		other.w = w / Magnitude();
		return other;
	}
	Vector4 Vector4::hexadex(unsigned int color)
	{
		x = ((color >> 24) & 0xFF) / 255.0;
		y = ((color >> 16) & 0xFF) / 255.0;
		z = ((color >> 8) & 0xFF) / 255.0;
		w = ((color)& 0xFF) / 255.0;
		return *this;
	}
	bool Vector4::operator== (Vector4& other)
	{
		if (abs(x - other.x) < 0.001)
		{

		}
		else
		{
			return false;
		}
		if (abs(y - other.y) < 0.001)
		{

		}
		else
		{
			return false;
		}
		if (abs(z - other.z) < 0.001)
		{

		}
		else
		{
			return false;
		}
		if (abs(w - other.w) < 0.001)
		{

		}
		else
		{
			return false;
		}
		return true;
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
	matrix3 matrix3::scale(Vector3& other)
	{
		matrix3 temp;
		temp.matrix[0][0] = other.x;
		temp.matrix[0][1] = 0;
		temp.matrix[0][2] = 0;
		temp.matrix[1][0] = 0;
		temp.matrix[1][1] = other.y;
		temp.matrix[1][2] = 0;
		temp.matrix[2][0] = 0;
		temp.matrix[2][1] = 0;
		temp.matrix[2][2] = other.z;
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
	matrix4 matrix4::ortho(float r, float l, float t, float b, float f, float n)
	{
			matrix4 temp;
			temp.matrix[0][0] = 2 / r - l;
			temp.matrix[0][1] = 0;
			temp.matrix[0][2] = 0;
			temp.matrix[0][3] = -(r + l / r - l);
			temp.matrix[1][0] = 0;
			temp.matrix[1][1] = 2 / t - b;
			temp.matrix[1][2] = 0;
			temp.matrix[1][3] = -(t + b / t - b);
			temp.matrix[2][0] = 0;
			temp.matrix[2][1] = 0;
			temp.matrix[2][2] = -2 / (f - n);
			temp.matrix[2][3] = -(f + n / (f - n));
			temp.matrix[3][0] = 0;
			temp.matrix[3][1] = 0;
			temp.matrix[3][2] = 0;
			temp.matrix[3][3] = 1;
			return temp;
	}
	matrix4 matrix4::scale(Vector3& other)
	{
		matrix4 temp;
		temp.matrix[0][0] = other.x;
		temp.matrix[0][1] = 0;
		temp.matrix[0][2] = 0;
		temp.matrix[0][3] = 0;
		temp.matrix[1][0] = 0;
		temp.matrix[1][1] = other.y;
		temp.matrix[1][2] = 0;
		temp.matrix[1][3] = 0;
		temp.matrix[2][0] = 0;
		temp.matrix[2][1] = 0;
		temp.matrix[2][2] = other.z;
		temp.matrix[2][3] = 0;
		temp.matrix[3][0] = 0;
		temp.matrix[3][1] = 0;
		temp.matrix[3][2] = 0;
		temp.matrix[3][3] = 1;
		return temp;
	}
	matrix4 matrix4::rotationx(float angle)
	{
		matrix4 temp;
		temp.matrix[0][0] = 1;
		temp.matrix[0][1] = 0;
		temp.matrix[0][2] = 0;
		temp.matrix[0][3] = 0;
		temp.matrix[1][0] = 0;
		temp.matrix[1][1] = cos(angle);
		temp.matrix[1][2] = sin(angle);
		temp.matrix[1][2] = 0;
		temp.matrix[2][0] = 0;
		temp.matrix[2][1] = -sin(angle);
		temp.matrix[2][2] = cos(angle);
		temp.matrix[2][3] = 0;
		temp.matrix[3][0] = 0;
		temp.matrix[3][1] = 0;
		temp.matrix[3][2] = 0;
		temp.matrix[3][3] = 1;
		return temp;
	}
	matrix4 matrix4::rotationy(float angle)
	{
		matrix4 temp;
		temp.matrix[0][0] = cos(angle);
		temp.matrix[0][1] = 0;
		temp.matrix[0][2] = -sin(angle);
		temp.matrix[0][3] = 0;
		temp.matrix[1][0] = 0;
		temp.matrix[1][1] = 1;
		temp.matrix[1][2] = 0;
		temp.matrix[1][3] = 0;
		temp.matrix[2][0] = sin(angle);
		temp.matrix[2][1] = 0;
		temp.matrix[2][2] = cos(angle);
		temp.matrix[2][3] = 0;
		temp.matrix[3][0] = 0;
		temp.matrix[3][1] = 0;
		temp.matrix[3][2] = 0;
		temp.matrix[3][3] = 1;
		return temp;
	}
	matrix4 matrix4::rotationz(float angle)
	{
		matrix4 temp;
		temp.matrix[0][0] = cos(angle);
		temp.matrix[0][1] = sin(angle);
		temp.matrix[0][2] = 0;
		temp.matrix[0][3] = 0;
		temp.matrix[1][0] = -sin(angle);
		temp.matrix[1][1] = cos(angle);
		temp.matrix[1][2] = 0;
		temp.matrix[1][3] = 0;
		temp.matrix[2][0] = 0;
		temp.matrix[2][1] = 0;
		temp.matrix[2][2] = 1;
		temp.matrix[2][3] = 0;
		temp.matrix[3][0] = 0;
		temp.matrix[3][1] = 0;
		temp.matrix[3][2] = 0;
		temp.matrix[3][3] = 1;
		return temp;
	}
	Vector4 matrix4::transformVector(Vector4 other)
	{
		Vector4 temp;
		temp.x = other.x * matrix[0][0] + other.y * matrix[1][0] + other.z * matrix[2][0] + other.w * matrix[3][0];
		temp.y = other.x * matrix[0][1] + other.y * matrix[1][1] + other.z * matrix[2][1] + other.w * matrix[3][1];
		temp.z = other.x * matrix[0][2] + other.y * matrix[1][2] + other.z * matrix[2][2] + other.w * matrix[3][2];
		temp.w = other.x * matrix[0][3] + other.y * matrix[1][3] + other.z * matrix[2][3] + other.w * matrix[3][3];
		if (temp.w != 1 && temp.w != 0)
		{
			temp.x = other.x / temp.w;
			temp.y = other.y / temp.w;
			temp.z = other.z / temp.w;
			temp.w = 1;
		}
		return temp;
	}
	float CommonMath::degreesToRadian(float degrees)
	{
		float returnNumber;
		
		// degrees to radian
		returnNumber = degrees * 3.14 / 180.0;

		return returnNumber;
	}
	float CommonMath::radianToDegrees(float radians)
	{
		float returnNumber;

		// degrees to radian
		returnNumber = radians * 180 / 3.14;

		return returnNumber;
	}
	float CommonMath::linearInterpolation(float left, float right, float t)
	{
		return (left) + ((right - left) * t);
	}
	float CommonMath::testValueOf2(float other)
	{
		for (int i = 1;; i++)
		{
			int pon = pow(2.f, i);
			if (pon == other)
			{
				return other;
			}
			else
			{
				if (pon > other)
				{
					float previous = abs(pow(2.f, i - 1) - other);
					float current = pon - other;
					if (previous < current)
					{
						return pow(2.f, i - 1);
					}
					else
					{
						return pon;
					}
				}
			}
		}
	}
}