#include <iostream>
#include <list>
#include <algorithm>

int main() {
	// 1970
	std::list<const char*> station = {
		"Tokyo",
		"Yurakucho",
		"Shimbashi",
		"Hamamatsucho",
		"Tamachi",
		//"Takanawa Gateway",
		"Shinagawa",
		"Osaki",
		"Gotanda",
		"Meguro",
		"Ebisu",
		"Shibuya",
		"Harajuku",
		"Yoyogi",
		"Shinjuku",
		"Shin-Okubo",
		"Takadanobaba",
		"Mejiro",
		"Ikebukuro",
		"Otsuka",
		"Sugamo",
		"Komagome",
		"Tabata",
		//"Nishi-Nippori",
		"Nippori",
		"Uguisudani",
		"Ueno",
		"Okachimachi",
		"Akihabara",
		"Kanda"
	};

	auto drawList = [&station]() {
		std::for_each(station.begin(), station.end(),
			[](const char* str) {
				std::cout << str << std::endl;
			}
		);
	};

	auto insertStation = [&station](const char* insertStationPos, const char* insertStation) {
		for (auto itr = station.begin(); itr != station.end(); itr++) {
			if (*itr == insertStationPos) {
				station.insert(itr, insertStation);
				break;
			}
		}
	};

	std::cout << "1970" << std::endl;
	drawList();

	std::cout << std::endl << "2019" << std::endl;
	insertStation("Nippori", "Nishi-Nippori");
	drawList();

	std::cout << std::endl << "2022" << std::endl;
	insertStation("Shinagawa", "Takanawa Gateway");
	drawList();

	return 0;
}