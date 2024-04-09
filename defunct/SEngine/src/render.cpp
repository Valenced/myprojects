#include "../includes/render.h"
#include "../includes/screen.h"
#include "../includes/raylib.h"

void updateRender() {
		
}

void render() {

	Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };
	
	 BeginMode3D(camera);

                DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
                DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);

                DrawGrid(10, 1.0f);

            EndMode3D();
}


