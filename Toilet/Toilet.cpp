#include "Toilet/Toilet.h"
#include <iostream>

Toilet::Toilet() {
	behavior = "wipe ass";
	flush = "flush the toilet";
}

void Toilet::Clean() {
	std::cout << behavior << std::endl;
	this->Flush();
}

void Toilet::Flush() {
	std::cout << flush << std::endl;
}