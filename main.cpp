#include <iostream>
#include <string>

template<class T>
const T& Min(T x, T y) {
	return x < y ? x : y;
}

template<>
const char& Min<char>(char x, char y) {
	static std::string str = "数字以外は代入できません";
	return str.at(0);
}

int main() {
	int32_t x_int = 114, y_int = 514;
	float x_float = 514.0f, y_float = 1140.0f;
	double x_double = 810.0, y_double = 1919.0;
	char x_char = 'a', y_char = 'i';

	std::cout << Min(x_int, y_int) << std::endl;
	std::cout << Min(x_float, y_float) << std::endl;
	std::cout << Min(x_double, y_double) << std::endl;
	std::cout << &(Min(x_char, y_char)) << std::endl;

	return 0;
}