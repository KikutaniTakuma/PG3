#include "Toilet/Toilet.h"
#include <iostream>

Toilet::Toilet() {
	behavior = "wipe";
	object = "ass";
	flush = "flush the toilet";
}

void Toilet::Clean() {
	std::cout << behavior << " " << object << std::endl;
	this->Flush();
}

void Toilet::Flush() {
	std::cout << flush << std::endl;
}