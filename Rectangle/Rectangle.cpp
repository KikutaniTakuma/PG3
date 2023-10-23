#include "Rectangle.h"
#include <iostream>

void Rectangle::size() {
	area = height * width;
}
void Rectangle::draw() {
	std::cout << "Rectangle area : " << area << std::endl;
}