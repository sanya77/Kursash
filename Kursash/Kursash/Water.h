#pragma once

class Water { //����
private:
	int _volume;//����� ����
public:
	explicit Water() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
