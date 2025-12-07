#include "raylib.h"
#include <iostream>

using namespace std;

int main(){

    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // for resizing and maximizing
    
    const int screen_width = 800;
    const int screen_height = 600;

    InitWindow(screen_width, screen_height, "first window");

    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(BLACK);
            int current_s_width = GetScreenWidth();
            int current_s_height = GetScreenHeight();
            DrawText("First Window YO!!", (current_s_width/2), (current_s_height/2), (current_s_width/40), LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}