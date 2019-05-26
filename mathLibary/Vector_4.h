//Vector 4.h
//class represents a set of carteasean coordinates
//for use in 3 dimentional systems
#pragma once

#ifndef _VECTOR_4_

#define _VECTOR_4_

class Vector_4
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
			float w;
		};
		float data[4];
	};
	Vector_4();
	Vector_4(const float a_x, const float a_y, const float a_z, const float a_w);
	//allows direct data access by overloading 
	//returns reference to indexed data
	float& operator[] (const int index);

	//castng operators overloading
	//changable version
	operator float* ();
	//read only version
	operator const float* () const;

	Vector_4 operator + (const Vector_4& other) const;

	Vector_4 operator - (const Vector_4& other) const;

	Vector_4 operator * (float scalar) const;

	Vector_4 operator / (float scalar) const;




	Vector_4& operator += (const Vector_4& a_rhs);
	Vector_4& operator -= (const Vector_4& a_rhs);
	Vector_4& operator *= (const float a_rhs);
	Vector_4& operator /= (const float a_rhs);

	float square_magnitude() const;
	float magnitude() const;

	void normalise();
	Vector_4 normalised() const;

	bool operator == (const Vector_4& a_rhs);

	float dot(const Vector_4& a_rhs) const;
	static float dot(const Vector_4& a_lhs, const Vector_4& a_rhs);

	Vector_4 cross(const Vector_4& a_rhs) const;
	static Vector_4 cross(const Vector_4& a_lhs, const Vector_4& a_rhs);
};

Vector_4 operator*(const float a_lhs, const Vector_4& a_rhs);


#endif // VECTOR_2_
