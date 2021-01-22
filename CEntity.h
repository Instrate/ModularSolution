#pragma once
#include "main.h"

class CEntity {
public:
	// position
	std::vector<double>* pos;
	
	// velocity
	std::vector <double>* vel;

	// acceleration
	std::vector <double>* acel;

	void methodMove(long int tick);

	//loading parametres 
	void virtual methodLoadDefaultParametres() {
		pos = new std::vector<double>(dim, 0);
		vel = new std::vector<double>(dim, 0);
		acel = new std::vector<double>(dim, 0);
	
	}


	CEntity();

private:
	// amount of countable dimensions
	const int dim = 3;


};