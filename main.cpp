#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <array>

int main() {
	std::ifstream file{ "data.txt" };
	if (file.fail() || !file.is_open()) {
		return -1;
	}
	std::vector<std::string> studentNumbers;

	std::string lineBuf;
	while (std::getline(file, lineBuf))
	{
		studentNumbers.emplace_back(lineBuf);
	}

	std::sort(
		studentNumbers.begin(),
		studentNumbers.end()
	);

	for (auto& i : studentNumbers) {
		std::cout << i << std::endl;
	}


	return 0;
}