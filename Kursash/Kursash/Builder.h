#pragma once
#include "Bread.h"
#include <iostream>

class Builder {
protected:
	Bread *_bread;
public:
	Builder() : _bread(nullptr) {}
	void CreateBread() { delete _bread; _bread = new Bread; }//создаём основу хлеба
	virtual void create() = 0;//Выпечка изделия
	virtual const char* type() const = 0;//тип хлеба
	virtual void print(std::ostream& out) = 0;//вывод
	virtual ~Builder() {
		delete _bread;
	}
};
