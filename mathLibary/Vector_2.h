//Vector 2.h
//class represents a set of carteasean coordinates
//for use in 2 dimentional systems
#pragma once

#ifndef _VECTOR_2_

#define _VECTOR_2_

class Vector_2
{
public:
	//math data for Vector_2
	union 
	{
		struct 
		{
			float x;
			float y;
		};
		float data[2];
	};
	
	Vector_2(const float a_x = 0.0f, const float a_y =0.0f);
	//allows direct data access by overloading 
	//returns reference to indexed data
	float& operator[] (const int index);

	//castng operators overloading
	//changable version
	operator float* ();
	//read only version
	operator const float* () const;

	Vector_2 operator + (const Vector_2& other) const;

	Vector_2 operator - (const Vector_2& other) const;

	Vector_2 operator * (float scalar) const;

	Vector_2 operator / (float scalar) const;

	Vector_2& operator += (const Vector_2& a_rhs);
	Vector_2& operator -= (const Vector_2& a_rhs);
	Vector_2& operator *= (const float a_rhs);
	Vector_2& operator /= (const float a_rhs);

	float square_magnitude() const;
	float magnitude() const;

	void normalise();
	Vector_2 normalised() const;

	//v1.dot(v2)

	float  dot(const Vector_2& a_rhs) const;
	static float dot(const Vector_2& a_lhs, const Vector_2& a_rhs);
	

	Vector_2 right() const;


	bool operator == (const Vector_2& a_rhs);
};
	
	Vector_2 operator*(const float a_lhs, const Vector_2& a_rhs);


	#endif // VECTOR_2_
