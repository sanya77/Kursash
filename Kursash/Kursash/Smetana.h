#pragma once

class Smetana { //�������
private:
	int _volume;//����� �������
public:
	explicit Smetana() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
