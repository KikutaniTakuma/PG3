#include <iostream>
#include "Calc.h"

int main() {
	Calc<int32_t, int32_t> calcIntInt;
	Calc<float, float> calcFloatFloat;
	Calc<double, double> calcDoubleDouble;
	Calc<int32_t, float> calcIntFloat;
	Calc<int32_t, double> calcIntDouble;
	Calc<float, double> calcFloatDouble;

	std::cout << std::fixed << "int and int       : " << calcIntInt.Min(4, 6) << std::endl;
	std::cout << std::fixed << "float and float   : " << calcFloatFloat.Min(4.0f, 6.0f) << std::endl;
	std::cout << std::fixed << "double and double : " << calcDoubleDouble.Min(4.0, 6.0) << std::endl;
	std::cout << std::fixed << "int and float     : " << calcIntFloat.Min(4, 6.0f) << std::endl;
	std::cout << std::fixed << "int and double    : " << calcIntDouble.Min(4, 6.0) << std::endl;
	std::cout << std::fixed << "float and double  : " << calcFloatDouble.Min(4.0f, 6.0) << std::endl;

	return 0;
}