﻿#include <iostream>
#include <fstream>

int32_t OtinginKudasaiFunction(int32_t num, int32_t recursive) {
	static int32_t general = 1072;
	if ((num * general) < recursive) {
		return num;
	}

	num++;
	recursive += (recursive * 2) - 50;
	return OtinginKudasaiFunction(num, recursive);
}

int main() {
	std::ofstream file{ "./answer.md" };
	int32_t answer = OtinginKudasaiFunction(1, 100);

	std::cout << answer << std::endl;

	file << "answer : " << answer << " h";

	return 0;
}