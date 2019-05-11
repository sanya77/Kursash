#pragma once

class Slivki { //сливки
private:
	int _volume;//объём сливок
public:
	explicit Slivki() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
