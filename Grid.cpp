#include <iostream>
#include "raylib.h"

using namespace std;

const int SCREEN_WIDTH = 1080;
const int SCREEN_HEIGHT = 1080;

void DisplayGrid(int cellSize, int screenWidth, int screenHeight){
    int num_cells_x = screenWidth/cellSize;
    int num_cells_y = screenHeight/cellSize;  

    // vertical grid lines
    for (int x=0; x<=num_cells_x; x++) {
        DrawLine(x*cellSize, 0, x*cellSize, screenHeight, LIGHTGRAY);
    }

    // horizontal grid lines
    for (int y=0; y<=num_cells_y; y++) {
        DrawLine(0, y*cellSize, screenWidth, y*cellSize, LIGHTGRAY);
    }
}

int main(){
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,"Grid");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        int screenWidth = GetScreenWidth();
        int screenHeight = GetScreenHeight();
        
        BeginDrawing();

        ClearBackground(BLACK);
        
        DisplayGrid(100, screenWidth, screenHeight);

        int fps = GetFPS();
        DrawText(TextFormat("FPS: %d", fps), 10, 10, 40, GREEN);
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
