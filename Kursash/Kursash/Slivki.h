#pragma once

class Slivki { //������
private:
	int _volume;//����� ������
public:
	explicit Slivki() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
