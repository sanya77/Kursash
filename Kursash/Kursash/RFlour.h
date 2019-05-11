#pragma once
#include <string>


class Flour { //мука
private:
	std::string _name;//тип муки
public:
	explicit Flour() {}
	std::string& name() { return _name; }
	const std::string& name() const { return _name; }
};
