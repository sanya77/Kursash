#pragma once
#include "Builder.h"

class Chiabatta : public Builder {
public:
	const char* type() const { return "Chiabatta"; }
	void create() {
		Builder::CreateBread();
		this->_bread->setEgg();
		this->_bread->egg()->count() = 2;
		this->_bread->setFlour();
		this->_bread->flour()->name() = "Pshenichaya";
		this->_bread->setSlivki();
		this->_bread->slivki()->volume() = 4;
		this->_bread->setSmetana();
		this->_bread->smetana()->volume() = 9;
	}
	void print(std::ostream& out) {
		out << "Egg: " << this->_bread->egg()->count();
		out << "\nFlour: " << this->_bread->flour()->name();
		out << "\nSlivki: " << this->_bread->slivki()->volume();
		out << "\nSmetana: " << this->_bread->smetana()->volume();
	}
};
