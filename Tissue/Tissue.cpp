#include "Tissue/Tissue.h"
#include <random>
#include <iostream>

Tissue::Tissue() :
	currentState{State::Clear}
{
	behavior = "blow";
	object = "nose";

	status[State::Clear] = "clear";
	status[State::Congestion] = "congestion";
	status[State::Dead] = "dead";

	std::random_device seed;
	std::mt19937_64 rnd{ seed() };

	std::uniform_int_distribution<> dist{ static_cast<uint16_t>(State::Congestion), static_cast<uint16_t>(State::MaxNumber) - 1 };

	currentState = static_cast<State>(dist(rnd));
}

void Tissue::Clean() {
	DrawState();
	std::cout << object << " " << behavior << std::endl;
	currentState = State::Clear;
	DrawState();
}

void Tissue::DrawState() {
	std::cout << "now state : " << status[currentState] << std::endl;
}