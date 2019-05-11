#pragma once

class Egg { //Яйца
private:
	int _count;//кол-во яиц
public:
	explicit Egg() :_count(0) {}
	int& count() { return _count; }
	const int& count() const { return _count; }
};
