#pragma once

class Milk { //������
private:
	int _volume;//����� ������
public:
	explicit Milk() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
