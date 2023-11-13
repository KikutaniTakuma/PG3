#pragma once
#include "Paper/Paper.h"
#include <unordered_map>
#include <optional>

class Tissue : public Paper {
private:
	enum class State : uint16_t {
		Clear,
		Congestion,
		Dead,

		MaxNumber
	};

public:
	Tissue();
	Tissue(const Tissue&) = default;
	Tissue(Tissue&&) = default;
	~Tissue() override = default;

	Tissue& operator=(const Tissue&) = default;
	Tissue& operator=(Tissue&&) = default;

public:
	void Clean() override;

private:
	void DrawState();

protected:
	std::unordered_map<std::optional<State>, std::string> status;
	std::optional<State> currentState;
};
