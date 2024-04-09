#include <raylib.h>
#include "../includes/screen.h"
#include "../includes/grid.h"

int main() {

  // Initialization
  //-------------------------------------------------
  Color darkBlue = {22, 22, 127, 255};
  Screen();

  Grid grid = Grid();
  grid.Print();
  //-------------------------------------------------

  // Main game loop
  while (!WindowShouldClose()) {

    // Draw
    BeginDrawing();
    ClearBackground(darkBlue);

    EndDrawing();
  }

  // De-Initalization
  //-------------------------------------------------
  CloseWindow(); // Closing window and graphics context

  return 0;
}