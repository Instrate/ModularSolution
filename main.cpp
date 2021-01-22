#include "main.h"

int main() {
	Engine *engine = new Engine();
	int load_code = engine->load(true);
	if (load_code) {
		return load_code;
	}


	int unload_code = engine->unload();
	if (unload_code) {
		return unload_code;
	}
	delete engine;
	return EXIT_SUCCESS;
}
