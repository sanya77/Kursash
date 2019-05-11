#pragma once
#include "Cream.h"
#include "Egg.h"
#include "Milk.h"
#include "RFlour.h"
#include "Slivki.h"
#include "Smetana.h"
#include "Water.h"

class Bread { //тип хлеба
private:
	Cream *_cream;
	Egg *_egg;
	Milk *_milk;
	Flour *_flour;
	Slivki *_slivki;
	Smetana *_smetana;
	Water *_water;
public:
	explicit Bread() :_cream(nullptr),
		_egg(nullptr),
		_flour(nullptr),
		_milk(nullptr),
		_slivki(nullptr),
		_smetana(nullptr),
		_water(nullptr) {}

	void setCream() { delete _cream; _cream = new Cream; }
	void setEgg() { delete _egg; _egg = new Egg; }
	void setMilk() { delete _milk; _milk = new Milk; }
	void setFlour() { delete _flour; _flour = new Flour; }
	void setSlivki() { delete _slivki; _slivki = new Slivki; }
	void setSmetana() { delete _smetana; _smetana = new Smetana; }
	void setWater() { delete _water; _water = new Water; }
	//геттеры и сеттеры
	Cream *cream() { return _cream; }
	Egg *egg() { return _egg; }
	Milk *milk() { return _milk; }
	Flour *flour() { return _flour; }
	Slivki *slivki() { return _slivki; }
	Smetana *smetana() { return _smetana; }
	Water *water() { return _water; }

	const Cream *cream()const { return _cream; }
	const Egg *egg()const { return _egg; }
	const Milk *milk()const { return _milk; }
	const Flour *flour()const { return _flour; }
	const Slivki *slivki()const { return _slivki; }
	const Smetana *smetana()const { return _smetana; }
	const Water *water()const { return _water; }

	~Bread() {
		delete _cream;
		delete _egg;
		delete _milk;
		delete _flour;
		delete _slivki;
		delete _smetana;
		delete _water;
	}
};
