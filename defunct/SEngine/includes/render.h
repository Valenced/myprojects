#pragma once
#include "raylib.h"

void updateRender();
void render();

void variables() {
   public:
    inline Camera3D camera = { 0 };
     inline camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };  // Camera position
     inline camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
     inline camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
     inline camera.fovy = 45.0f;                                // Camera field-of-view Y
     inline camera.projection = CAMERA_PERSPECTIVE;
}
