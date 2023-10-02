#include <iostream>

template<class T>
T Min(T x, T y) {
	return x < y ? x : y;
}

void Min(char x, char y) {
	std::cout << "”ŽšˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ" << std::endl;
}

int main() {
	int32_t x_int = 114, y_int = 514;
	float x_float = 514.0f, y_float = 1140.0f;
	double x_double = 810.0, y_double = 1919.0;
	char x_char = 'a', y_char = 'i';

	std::cout << Min(x_int, y_int) << std::endl;
	std::cout << Min(x_float, y_float) << std::endl;
	std::cout << Min(x_double, y_double) << std::endl;
	Min(x_char, y_char);

	return 0;
}