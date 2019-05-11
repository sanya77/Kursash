#pragma once

class Egg { //яйца
private:
	int _count;//кол-во €иц
public:
	explicit Egg() :_count(0) {}
	int& count() { return _count; }
	const int& count() const { return _count; }
};
