# CMakeList.txt: проект CMake для ModularSolution; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("ModularSolution")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (ModularSolution   "main.cpp" "main.h" "engine.cpp" "engine.h"  "entity.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
