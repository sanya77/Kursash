#pragma once

class Water { //גמהא
private:
	int _volume;//מבת¸ל גמהû
public:
	explicit Water() :_volume(0) {}
	int& volume() { return _volume; }
	const int& volume() const { return _volume; }
};
