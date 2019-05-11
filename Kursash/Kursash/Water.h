#pragma once

class Water { //вода
private:
	int _volume;//объём воды
public:
	explicit Water() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
