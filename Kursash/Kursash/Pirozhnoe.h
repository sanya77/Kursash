#pragma once
#include "Builder.h"

class Pirozhnoe : public Builder {
public:
	const char* type() const { return "Pirozhnoe"; }
	void create() {
		Builder::CreateBread();
		this->_bread->setEgg();
		this->_bread->egg()->count() = 2;
		this->_bread->setFlour();
		this->_bread->flour()->name() = "Rzhanaya";
		this->_bread->setWater();
		this->_bread->water()->volume() = 5;
		this->_bread->setCream();
		this->_bread->cream()->volume() = 2;
	}
	void print(std::ostream& out) {
		out << "Egg: " << this->_bread->egg()->count();
		out << "\nFlour: " << this->_bread->flour()->name();
		out << "\nWater: " << this->_bread->water()->volume();
		out << "\nCream: " << this->_bread->cream()->volume();
	}
};
