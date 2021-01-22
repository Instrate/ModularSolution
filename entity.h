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




private:
	// amount of countable dimensions
	const short dim = 3;

};