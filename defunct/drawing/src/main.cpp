#include "raylib.h"
#include "../includes/screen.h"
#include "../includes/render.h"

int main(void)
{

// Initialization
//-------------------------------------------------

Screen();

//-------------------------------------------------

// Main game loop
while (!WindowShouldClose())
{
	//Update
	updateRender();

	//Draw
	BeginDrawing();

	render();		
	
	EndDrawing();
}

//De-Initalization
//-------------------------------------------------
	CloseWindow(); // Closing window and graphics context

	return 0;
}
	
