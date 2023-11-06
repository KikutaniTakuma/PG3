#include <iostream>
#include <Windows.h>
#include <string>

int main() {
	// この関数を使うと文字化けする
	//SetConsoleOutputCP(65001);

	std::string myLowerBackHurts = "腰が限界";

	printf(myLowerBackHurts.c_str());

	return 0;
}