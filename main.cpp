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


int main() {
	std::function<void(int32_t)> setTimeOut = [](int32_t second) {
		int32_t count = second;
		while (count > 0) {
			std::cout << count << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			count--;
		}
		};

	std::wcout << "何秒待つか入力してください" << std::endl;
	int32_t waitSecond = 0;
	std::cin >> waitSecond;

	std::function<void(bool)> answer = [waitSecond, &setTimeOut](bool isCorrect) {
		std::cout << std::endl;
		setTimeOut(waitSecond);

		if (isCorrect) {
			std::wcout << "正解!!!" << std::endl;
		}
		else {
			std::wcout << "不正解" << std::endl;
		}
	};

	int32_t isEven;

	std::wcout << "偶数の場合は0を、奇数の場合は1を入力してください" << std::endl;

	std::cin >> isEven;

	isEven = std::clamp(isEven, 0, 1);

	int32_t dice = Dice();

	answer(dice % 2 == isEven);

	return 0;
}