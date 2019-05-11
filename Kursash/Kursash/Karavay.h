#pragma once
#include "Builder.h"

class Karavay : public Builder {
public:
	const char* type() const { return "Karavay"; }
	void create() {
		Builder::CreateBread();
		this->_bread->setEgg();
		this->_bread->egg()->count() = 9;
		this->_bread->setFlour();
		this->_bread->flour()->name() = "Pshenichaya";
		this->_bread->setSlivki();
		this->_bread->slivki()->volume() = 4;
		this->_bread->setSmetana();
		this->_bread->smetana()->volume() = 9;
		this->_bread->setCream();
		this->_bread->cream()->volume() = 6;
	}
	void print(std::ostream& out) {
		out << "Egg: " << this->_bread->egg()->count();
		out << "\nFlour: " << this->_bread->flour()->name();
		out << "\nSlivki: " << this->_bread->slivki()->volume();
		out << "\nSmetana: " << this->_bread->smetana()->volume();
		out << "\nCream: " << this->_bread->cream()->volume();
	}
};
