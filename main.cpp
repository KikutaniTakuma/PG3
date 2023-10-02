#include <iostream>
#include <fstream>

int32_t SalaryCalculation(int32_t num, int32_t recursive, int32_t total) {
	static int32_t general = 1072;
	if ((num * general) < total) {
		return num;
	}

	num++;
	recursive = (recursive * 2) - 50;
	total += recursive;
	return SalaryCalculation(num, recursive, total);
}

int main() {
	std::ofstream file{ "./answer.md" };
	int32_t answer = SalaryCalculation(1, 100, 100);

	std::cout << answer << std::endl;

	file << "answer : " << answer << " h";

	return 0;
}