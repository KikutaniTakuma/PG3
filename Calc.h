#pragma once

template<typename T1, typename T2>
class Calc {
public:
	Calc() = default;
	Calc(const Calc&) = default;
	Calc(Calc&&) = default;
	~Calc() = default;

	Calc& operator=(const Calc&) = default;
	Calc& operator=(Calc&&) = default;

public:
	T1 Min(T1 num1, T2 num2) const {
		return	static_cast<T1>(num1) < static_cast<T1>(num2) ? num1 : num2;
	}
};