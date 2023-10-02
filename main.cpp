#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include <algorithm>

bool Dice(int32_t isEven) {
	static std::random_device seed;
	static std::mt19937_64 rnd(seed());

	std::uniform_int_distribution<> dist(1, 6);

	isEven = std::clamp(isEven, 0, 1);

	return dist(rnd) % 2 == isEven;
}

void CallBack(bool isCorrect) {
	std::cout << std::endl;
	int32_t count = 3;
	while (count > 0) {
		std::cout << count << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		count--;
	}

	if (isCorrect) {
		std::cout << "³‰ð!!!" << std::endl;
	}
	else {
		std::cout << "•s³‰ð" << std::endl;
	}
}


int main() {
	auto func = Dice;
	int32_t input;

	std::cout << "‹ô”‚Ìê‡‚Í0‚ðAŠï”‚Ìê‡‚Í1‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

	std::cin >> input;

	CallBack(func(input));

	return 0;
}