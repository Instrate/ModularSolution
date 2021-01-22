#include "main.h"

#include "CEngine.h"

int main() {
	CEngine *engine = new CEngine();
	int load_code = engine->load(true);
	if (load_code) {
		return load_code;
	}


	int unload_code = engine->unload();
	if (unload_code) {
		return unload_code;
	}
	return EXIT_SUCCESS;
}
