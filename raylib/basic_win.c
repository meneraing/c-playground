/* Basic window using raylib */
/* Compile with gcc basic_win.c -lraylib -o basic_win */

#include "raylib.h"

int main(void) {
  const int windowWidth = 800;
  const int windowHeight = 500;

  InitWindow(windowWidth, windowHeight, "Basic window");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("A very basic window indeed!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
