#pragma once

class Egg { //����
private:
	int _count;//���-�� ���
public:
	explicit Egg() :_count(0) {}
	int& count() { return _count; }
	const int& count() const { return _count; }
};
