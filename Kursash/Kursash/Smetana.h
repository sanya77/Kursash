#pragma once

class Smetana { //сметана
private:
	int _volume;//объём сметаны
public:
	explicit Smetana() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
