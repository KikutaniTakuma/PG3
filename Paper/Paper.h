#pragma once
#include <string>

class Paper {
public:
	Paper();
	Paper(const Paper&) = default;
	Paper(Paper&&) = default;
	virtual ~Paper() = default;

public:
	Paper& operator=(const Paper&) = default;
	Paper& operator=(Paper&&) = default;

public:
	virtual void Clean();

protected:
	std::string behavior;
	std::string object;
};