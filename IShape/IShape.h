#pragma once

class IShape {
public:
	IShape() = default;
	IShape(const IShape&) = default;
	IShape(IShape&&) = default;
	virtual ~IShape() = default;

public:
	IShape& operator=(const IShape&) = default;
	IShape& operator=(IShape&&) = default;

public:
	virtual void size() = 0;
	virtual void draw() = 0;

protected:
	float area;
};