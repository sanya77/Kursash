#pragma once

class Cream { //крем
private:
	int _volume;//объём крема
public:
	explicit Cream() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
