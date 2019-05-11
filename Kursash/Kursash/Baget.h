#pragma once#pragma once
#include "Builder.h"

class Baget : public Builder {
public:
	const char* type() const { return "Baget"; }
	void create() {
		Builder::CreateBread();
		this->_bread->setEgg();
		this->_bread->egg()->count() = 12;
		this->_bread->setFlour();
		this->_bread->flour()->name() = "Pshenichaya";
		this->_bread->setMilk();
		this->_bread->milk()->volume() = 3;
		this->_bread->setSmetana();
		this->_bread->smetana()->volume() = 8;
	}
	void print(std::ostream& out) {
		out << "Egg: " << this->_bread->egg()->count();
		out << "\nFlour: " << this->_bread->flour()->name();
		out << "\nMilk: " << this->_bread->milk()->volume();
		out << "\nSmetana: " << this->_bread->smetana()->volume();
	}
};