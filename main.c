#include "raylib.h"
#include "scenes.h"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const char* WINDOW_TITLE = "Pong";
const int TARGET_FPS = 240;

int main(void) {
    Scene* current_scene = generate_main_scene();
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

    SetTargetFPS(TARGET_FPS);

    current_scene->start();
    while(!WindowShouldClose()) {
        current_scene->update();
        ClearBackground(BLACK);

        BeginDrawing();
            current_scene->render();
            DrawFPS(0, 0);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}