#pragma once
#include "main.h"

class Entity {
public:
	// position
	std::vector <double>* pos = new std::vector <double>[dim];
	
	// velocity
	std::vector <double>* vel = new std::vector <double>[dim];

	// acceleration
	std::vector <double>* acel = new std::vector <double>[dim];

	void methodMove(long int tick);

	void virtual methodLoad() {
		for (int i = 0; i < dim; i++) {
			pos[i] = 0;
			*(vel + i) = 0;
			*(acel + i) = 0;
		}
	}

private:
	// amount of countable dimensions
	const short dim = 3;

};