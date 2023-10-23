#pragma once
#include "IShape/IShape.h"

class Circle : public IShape {
public:
	Circle() = default;
	Circle(const Circle&) = default;
	Circle(Circle&&) = default;
	~Circle() = default;

	Circle& operator=(const Circle&) = default;
	Circle& operator=(Circle&&) = default;

public:
	void size() override;
	void draw() override;

public:
	float radius;
};