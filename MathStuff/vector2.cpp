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
	Vector2 Vector2::operator* (Vector2& Other)
	{
		Vector2 temp;
		temp.x = x * Other.x;
		temp.y = y * Other.y;
		return temp;
	}
	//Vector3
	Vector3 Vector3::operator+ (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x + Other.x;
		temp.y = y + Other.y;
		temp.z = z + Other.z;
		temp.m = sqrt(((x)+(y)+(z))*2);
		return temp;
	}
	Vector3 Vector3::operator- (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		temp.z = z - Other.z;
		temp.m = sqrt(((x)+(y)+(z))*2);
		return temp;
	}
	Vector3 Vector3::operator* (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x * Other.x;
		temp.y = y * Other.y;
		temp.z = z * Other.z;
		temp.m = sqrt(((x)+(y)+(z))*2);
		return temp;
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
}