#pragma once
class colliders
{
public:
	enum shape : char
	{
		none = 0,
		circle,
		aabb,
		line
	};
	colliders() = delete;

	const shape getShape() const;
protected:
	shape m_shape = shape::none;

	colliders(shape a_shape);
private:


};

