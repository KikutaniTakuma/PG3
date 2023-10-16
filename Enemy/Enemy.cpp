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
	std::wcout << "Enemyの近接攻撃！" << std::endl;

	uint32_t count = 3u;

	while (count > 0) {
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::seconds{ 1 });

		count--;
	}

	std::wcout << std::endl << "プレイヤーへのダメージ : " << meleeAttack << std::endl;
}

void Enemy::Shot() {
	std::wcout << "Enemyの射撃攻撃！" << std::endl;

	uint32_t count = 3u;

	while (count > 0) {
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::seconds{ 1 });

		count--;
	}

	std::wcout << std::endl << "プレイヤーへのダメージ : " << shotAttack << std::endl;
}

void Enemy::RunAway() {
	std::wcout << "Enemyは避けた！" << std::endl;

	uint32_t count = 3u;

	while (count > 0) {
		std::cout << ".";
		std::this_thread::sleep_for(std::chrono::seconds{ 1 });

		count--;
	}

	std::wcout << std::endl << "プレイヤーからのダメージ : " << 0 << std::endl;
}