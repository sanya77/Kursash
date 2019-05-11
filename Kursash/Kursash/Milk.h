#pragma once

class Milk { //молоко
private:
	int _volume;//объём молока
public:
	explicit Milk() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
