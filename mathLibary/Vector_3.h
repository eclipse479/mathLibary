//Vector 3.h
//class represents a set of carteasean coordinates
//for use in 3 dimentional systems
#pragma once

#ifndef _VECTOR_3_

#define _VECTOR_3_

class Vector_3
{
public:
	//math data for Vector_3
	union
	{
		struct
		{
			float x;
			float y;
			float z;
		};
		float data[3];
	};
	Vector_3();
	Vector_3(const float a_x, const float a_y, const float a_z);
	//allows direct data access by overloading 
	//returns reference to indexed data
	float& operator[] (const int index);

	//castng operators overloading
	//changable version
	operator float* ();
	//read only version
	operator const float* () const;

	Vector_3 operator + (const Vector_3& other) const;

	Vector_3 operator - (const Vector_3& other) const;

	Vector_3 operator * (float scalar) const;

	Vector_3 operator / (float scalar) const;




	Vector_3& operator += (const Vector_3& a_rhs);
	Vector_3& operator -= (const Vector_3& a_rhs);
	Vector_3& operator *= (const float a_rhs);
	Vector_3& operator /= (const float a_rhs);

	float square_magnitude() const;
	float magnitude() const;

	void normalise();
	Vector_3 normalised() const;

	bool operator == (const Vector_3& a_rhs);

	float dot(const Vector_3& a_rhs) const;
	static float dot(const Vector_3& a_lhs, const Vector_3& a_rhs);

	Vector_3 cross(const Vector_3& a_rhs) const;
	static Vector_3 cross(const Vector_3& a_lhs, const Vector_3& a_rhs);
};

Vector_3 operator*(const float a_lhs, const Vector_3& a_rhs);


#endif // VECTOR_2_
