#include "scenes.h"
#include "raylib.h"

Scene* generate_main_scene() {
    Scene* scene = malloc(sizeof(Scene));

    scene->type = MAIN_SCENE;
    scene->start = start;
    scene->update = update;
    scene->render = render;

    return scene;
}

void start() {

}

void update() {

}

void render() {
    DrawRectangle(20, 20, 150, 150, RED);
}