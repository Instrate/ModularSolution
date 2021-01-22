#include "main.h"

class Engine;

int Engine::testDebug() {
	
	return 0;
}

int Engine::load(bool debug) {
	if (debug) {
		std::cout << std::endl << std::endl << "-Loading in DEBUG-MODE";
	}


	if (debug) {
		std::cout << std::endl << "-Loading was successful";
	}
	return 0;
}

int Engine::unload() {

	return 0;
}