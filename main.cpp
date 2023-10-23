#include <iostream>
#include "Rectangle/Rectangle.h"
#include "Circle/Circle.h"
#include <vector>

int main() {
	auto rectangle = new Rectangle{};
	rectangle->width = 114.0f;
	rectangle->height = 115.0f;
	auto circle = new Circle{};
	circle->radius = 5.0f;

	std::vector<IShape*> shapes{ rectangle, circle };

	for (auto& i : shapes) {
		i->size();
		i->draw();
	}

	for (auto& i : shapes) {
		delete i;
		i = nullptr;
	}

	return 0;
}