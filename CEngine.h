#pragma once

const bool LOAD_ENGINE = true;
const bool UNLOAD_ENGINE = false;

class Engine {
public:

	int testDebug();

	int load(bool debug);

	int unload();

private:

};