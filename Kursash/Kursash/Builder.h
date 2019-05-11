#pragma once
#include "Bread.h"
#include <iostream>

class Builder {
protected:
	Bread *_bread;
public:
	Builder() : _bread(nullptr) {}
	void CreateBread() { delete _bread; _bread = new Bread; }//������ ������ �����
	virtual void create() = 0;//������� �������
	virtual const char* type() const = 0;//��� �����
	virtual void print(std::ostream& out) = 0;//�����
	virtual ~Builder() {
		delete _bread;
	}
};
