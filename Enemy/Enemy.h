#pragma once
#include <vector>

class Enemy {
public:
	Enemy();
	Enemy(const Enemy&) = default;
	Enemy(Enemy&&) = default;
	~Enemy() = default;

	Enemy& operator=(const Enemy&) = default;
	Enemy& operator=(Enemy&&) = default;

private:
	static std::vector<void (Enemy::*)()> funcTable;

public:
	void Update();

private:
	void Melee();

	void Shot();

	void RunAway();

private:
	int32_t meleeAttack;
	int32_t shotAttack;

};