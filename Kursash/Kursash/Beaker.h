#pragma once
#include "Builder.h"


class Beaker {
private:
	Builder *builder;
public:
	explicit Beaker() :builder(nullptr) {}

	void beak(Builder *_builder) {
		delete builder;
		builder = _builder;
		if (builder) {
			builder->create();
		}
	}

	friend std::ostream& operator<<(std::ostream& out, const Beaker& b) {
		if (b.builder) {
			out << "Name " << b.builder->type() << "\n";
			b.builder->print(out);
		}
		return out;
	}
	~Beaker() { delete builder; }
};
