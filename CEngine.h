#pragma once

#include "main.h"

#include "CEntity.h"

const bool LOAD_ENGINE = true;
const bool UNLOAD_ENGINE = false;

class CEngine {
public:

	std::vector<CEntity>* ent = NULL;

	int testDebug();

	int load(bool debug);

	int unload();

private:

};