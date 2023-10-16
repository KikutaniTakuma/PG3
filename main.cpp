#include <iostream>
#include "Enemy/Enemy.h"
#include <memory>

int main() {
	auto enemy = std::make_unique<Enemy>();

	enemy->Update();

	return 0;
}