#include <raylib.h>
#include "ball.h"
#include "colors.h"

int main() 
{
    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    Ball ball;
    
    InitWindow(screenWidth, screenHeight, "Breakin' Blocks");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        ball.Update();
        
        BeginDrawing();
            ClearBackground(clr_bg);
            ball.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}