namespace MathFuncs
{
	class Vector2
	{
		// 2 numbers direction
		float x;
		float y;

		Vector2 operator+ (Vector2& Other);
		Vector2 operator- (Vector2& Other);
		Vector2 operator* (Vector2& Other);
	};
	class Vector3
	{
		float x;
		float y;
		float z;
		float m;

		Vector3 operator+ (Vector3& Other);
		Vector3 operator- (Vector3& Other);
		Vector3 operator* (Vector3& Other);
	};
	class Vector4
	{
		float w;
		float x;
		float y;
		float z;

		Vector4 operator+ (Vector4& Other);
		Vector4 operator- (Vector4& Other);
		Vector4 operator* (Vector4& Other);
	};
	class Matrix3
	{
		float x;
		
	};
}