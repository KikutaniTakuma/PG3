#pragma once
#include "Paper/Paper.h"

class Tissue : public Paper {
public:
	Tissue();
	Tissue(const Tissue&) = default;
	Tissue(Tissue&&) = default;
	~Tissue() override = default;

	Tissue& operator=(const Tissue&) = default;
	Tissue& operator=(Tissue&&) = default;

public:
	void Clean() override;

protected:
	std::string object;
};
