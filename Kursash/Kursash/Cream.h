#pragma once

class Cream { //����
private:
	int _volume;//����� �����
public:
	explicit Cream() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
