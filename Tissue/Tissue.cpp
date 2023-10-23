#include "Tissue/Tissue.h"
#include <iostream>

Tissue::Tissue() {
	behavior = "blow";
	object = "nose";
}

void Tissue::Clean() {
	std::cout << object << " " << behavior << std::endl;
}