#include "Circle.h"
#include <numbers>
#include <cmath>
#include <iostream>

void Circle::size() {
	area = std::pow(radius, 2.0f) * std::numbers::pi_v<float>;
}
void Circle::draw() {
	std::cout << "Circle area : " << area << std::endl;
}