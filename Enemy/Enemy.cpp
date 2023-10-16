#include "Enemy.h"
#include <iostream>
#include <chrono>
#include <thread>

std::vector<void (Enemy::Enemy::*)()> Enemy::funcTable = {
	&Enemy::Melee,
	&Enemy::Shot,
	&Enemy::RunAway
};

Enemy::Enemy():
	meleeAttack(10),
	shotAttack(50)
{}

void Enemy::Update() {
	for (auto& func : funcTable) {
		(this->*(func))();
	}
}

void Enemy::Melee() {
	std::wcout << "Enemy�̋ߐڍU���I" << std::endl;

	uint32_t count = 3u;

	while (count > 0) {
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::seconds{ 1 });

		count--;
	}

	std::wcout << std::endl << "�v���C���[�ւ̃_���[�W : " << meleeAttack << std::endl;
}

void Enemy::Shot() {
	std::wcout << "Enemy�̎ˌ��U���I" << std::endl;

	uint32_t count = 3u;

	while (count > 0) {
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::seconds{ 1 });

		count--;
	}

	std::wcout << std::endl << "�v���C���[�ւ̃_���[�W : " << shotAttack << std::endl;
}

void Enemy::RunAway() {
	std::wcout << "Enemy�͔������I" << std::endl;

	uint32_t count = 3u;

	while (count > 0) {
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::seconds{ 1 });

		count--;
	}

	std::wcout << std::endl << "�v���C���[����̃_���[�W : " << 0 << std::endl;
}