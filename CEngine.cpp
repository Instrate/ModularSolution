#include "main.h"

class Engine;

int CEngine::testDebug() {
	
	return 0;
}

int CEngine::load(bool debug) {
	if (debug) {
		std::cout << std::endl << std::endl << "-Loading in DEBUG-MODE";
	}


	if (debug) {
		std::cout << std::endl << "-Loading was successful";
	}
	return 0;
}

int CEngine::unload() {

	return 0;
}