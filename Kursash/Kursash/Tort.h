#pragma once
#include "Builder.h"

class Tort : public Builder {
public:
	const char* type() const { return "Tort"; }
	void create() {
		Builder::CreateBread();
		this->_bread->setEgg();
		this->_bread->egg()->count() = 6;
		this->_bread->setFlour();
		this->_bread->flour()->name() = "Rzhanaya";
		this->_bread->setWater();
		this->_bread->water()->volume() = 5;
		this->_bread->setSmetana();
		this->_bread->smetana()->volume() = 4;
		this->_bread->setCream();
		this->_bread->cream()->volume() = 11;
	}
	void print(std::ostream& out) {
		out << "Egg: " << this->_bread->egg()->count();
		out << "\nFlour: " << this->_bread->flour()->name();
		out << "\nWater: " << this->_bread->water()->volume();
		out << "\nSmetana: " << this->_bread->smetana()->volume();
		out << "\nCream: " << this->_bread->cream()->volume();
	}
};
