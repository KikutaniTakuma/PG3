#include "Paper.h"
#include <iostream>

Paper::Paper():
	behavior{ "wipe" }
{}

void Paper::Clean() {
	std::cout << behavior << std::endl;
}