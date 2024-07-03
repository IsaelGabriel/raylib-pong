#ifndef SCENES_H
#define SCENES_H

typedef enum {
    MAIN_SCENE
} SceneType;

typedef struct
{
    SceneType type;
    void (*start)();
    void (*update)();
    void (*render)();
} Scene;

Scene* generate_main_scene();

#endif