#pragma once
#include "Vector_2.h"
#include "colliders.h"
class aabb : public colliders
{
public:
	static const Vector_2 defaultExtents;

	aabb(const Vector_2& newPosition = Vector_2(), 
		 const Vector_2& newExtents = defaultExtents);

	const Vector_2 getPosition() const;
	void setPosition(const Vector_2& newPosition);

	const Vector_2 getExtents() const;
	void setExtents(const Vector_2& newExtents);

	float getWidth() const;
	float getHeight() const;

	const Vector_2 getMax() const;
	const Vector_2 getMin() const;
private:
	Vector_2 m_position { 0.0f,0.0f };
	
	union 
	{
		Vector_2 m_extents;
		struct
		{
			float width;
			float height;
		};

	};
};

