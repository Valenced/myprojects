#include <raylib.h>
#include "../include/screen.h"
#include "../include/grid.h"

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
