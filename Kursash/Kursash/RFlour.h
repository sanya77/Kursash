#pragma once
#include <string>


class Flour { //����
private:
	std::string _name;//��� ����
public:
	explicit Flour() {}
	std::string& name() { return _name; }
	const std::string& name() const { return _name; }
};
