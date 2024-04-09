#include "raylib.h"
#include "../includes/screen.h"

int main(void)
{

// Initialization
//-------------------------------------------------

Screen();

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
	
