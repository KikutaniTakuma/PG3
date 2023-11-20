#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <algorithm>
#include <functional>

int32_t Dice() {
	static std::random_device seed;
	static std::mt19937_64 rnd(seed());

	std::uniform_int_distribution<> dist(1, 6);

	return dist(rnd);
}

void SetTimeOut(int32_t second, std::function<void(void)> diceRoll) {
	int32_t count = second;
	while (count > 0) {
		std::cout << count << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		count--;
	}

	diceRoll();
}


int main() {

	std::wcout << "何秒待つか入力してください" << std::endl;
	int32_t waitSecond = 0;
	std::cin >> waitSecond;


	int32_t isEven;

	std::wcout << "偶数の場合は0を、奇数の場合は1を入力してください" << std::endl;

	std::cin >> isEven;

	isEven = std::clamp(isEven, 0, 1);

	std::cout << std::endl;
	
	std::function<void(void)> diceRoll = [isEven, waitSecond]() {
		int32_t dice = Dice();
		if (dice % 2 == isEven) {
			std::wcout << "正解!!!" << std::endl;
		}
		else {
			std::wcout << "不正解" << std::endl;
		}
		};

	SetTimeOut(waitSecond, diceRoll);

	return 0;
}