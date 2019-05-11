#pragma once
#include "Builder.h"

class Hleb : public Builder {
public:
	const char* type() const { return "Hleb"; }
	void create() {
		Builder::CreateBread();
		this->_bread->setEgg();
		this->_bread->egg()->count() = 5;
		this->_bread->setFlour();
		this->_bread->flour()->name() = "Rzhanaya";
		this->_bread->setWater();
		this->_bread->water()->volume() = 10;
	}

	void print(std::ostream& out) {
		out << "Egg: " << this->_bread->egg()->count();
		out << "\nFlour: " << this->_bread->flour()->name();
		out << "\nWater: " << this->_bread->water()->volume();
	}
};
