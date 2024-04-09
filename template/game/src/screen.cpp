#include "raylib.h"
#include "../include/screen.h"

// Using our two constant variables and a string literal to initialize our window
void Screen() {
	InitWindow(screenWidth,screenHeight, "Movement");
  SetTargetFPS(60);
}
