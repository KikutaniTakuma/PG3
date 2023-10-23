#pragma once
#include "Paper/Paper.h"

class Toilet : public Paper {
public:
	Toilet();
	Toilet(const Toilet&) = default;
	Toilet(Toilet&&) = default;
	~Toilet() = default;

public:
	Toilet& operator=(const Toilet&) = default;
	Toilet& operator=(Toilet&&) = default;

public:
	void Clean() override;

private:
	void Flush();

protected:
	std::string flush;
};