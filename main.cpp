#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <algorithm>

int32_t Dice() {
	static std::random_device seed;
	static std::mt19937_64 rnd(seed());

	std::uniform_int_distribution<> dist(1, 6);

	return dist(rnd);
}

void SetTimeOut(int32_t(*func)(void), int32_t isEven, int32_t second) {
	std::cout << std::endl;
	// 秒数待つ
	int32_t count = second;
	while (count > 0) {
		std::cout << count << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		count--;
	}
	std::cout << std::endl;


	isEven = std::clamp(isEven, 0, 1);

	int32_t dice = func();

	bool answer = (dice % 2 == isEven);

	if (isEven == 0) {
		std::wcout << "入力 : " << "偶数" << "(" << isEven << ")" << std::endl;
	}
	else {
		std::wcout << "入力 : " << "奇数" << "(" << isEven << ")" << std::endl;
	}
	std::wcout << "サイコロ : " << dice << std::endl;

	if (answer) {
		std::wcout << "正解!!!" << std::endl;
	}
	else {
		std::wcout << "不正解" << std::endl;
	}
}


int main() {
	int32_t second;

	std::wcout << "待つ秒数を入力してください" << std::endl;

	std::cin >> second;

	// 奇数偶数を入力
	std::cout << std::endl;
	std::wcout << "偶数の場合は0を、奇数の場合は1を入力してください" << std::endl;
	int32_t isEven = 0;

	std::cin >> isEven;

	SetTimeOut(Dice, isEven, second);

	return 0;
}