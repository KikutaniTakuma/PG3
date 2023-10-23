#pragma once
#include "IShape/IShape.h"

class Rectangle : public IShape {
public:
	Rectangle() = default;
	Rectangle(const Rectangle&) = default;
	Rectangle(Rectangle&&) = default;
	~Rectangle() = default;

public:
	Rectangle& operator=(const Rectangle&) = default;
	Rectangle& operator=(Rectangle&&) = default;

public:
	void size() override;
	void draw() override;

public:
	float width;
	float height;
};