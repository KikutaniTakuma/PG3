#include <iostream>
#include <chrono>
#include <string>

int main() {
	std::string str(100000, 'a' );

	auto startTime = std::chrono::steady_clock::now();

	std::string copyStr = str;

	auto endTime = std::chrono::steady_clock::now();

	std::cout << "copy : " << std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime) << std::endl;


	startTime = std::chrono::steady_clock::now();

	std::string moveStr = std::move(str);

	endTime = std::chrono::steady_clock::now();

	std::cout << "move : " << std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime) << std::endl;

	return 0;
}