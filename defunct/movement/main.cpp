#include "raylib.h"


int main(void)
{

// Initialization
//-------------------------------------------------
	const int screenWidth = 800;
	const int screenHeight = 450;

// Using our two constant variables and a string literal to initialize our window
	InitWindow(screenWidth,screenHeight, "Movement");

// Setting our frames per second. This will be how fast we draw our screen. Currently our UPS and FPS are the same (not optimal).
	SetTargetFPS(60);
//-------------------------------------------------

// Main game loop
while (!WindowShouldClose())
{

	//Draw
	BeginDrawing();
	
		ClearBackground(WHITE);
		
		DrawText("Starting Window", 325, 220, 20, BLACK);
	
	EndDrawing();
}

//De-Initalization
//-------------------------------------------------
	CloseWindow(); // Closing window and graphics context

	return 0;
}
	
