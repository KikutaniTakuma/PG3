#include <iostream>
#include <vector>
#include <memory>
#include "Tissue/Tissue.h"
#include "Toilet/Toilet.h"
int main() {
	std::vector<Paper*> papers = {
		new Tissue,
		new Toilet
	};

	for (auto& i : papers) {
		i->Clean();
	}


	for (auto& i : papers) {
		delete i;
		i = nullptr;
	}

	return 0;
}