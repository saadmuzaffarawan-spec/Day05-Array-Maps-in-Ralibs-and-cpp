#include <raylib.h>
struct enemy{
    Vector2 position;
    Vector2 direction;
    float speed;
    Color color;
};

int main(){

    enemy ghost;
    ghost.position = {150, 200};
    ghost.direction = {1,1};
    ghost.speed = 200;
    ghost.color = RED;

    int boxsize = 30;
    int screenwidth =500;
    int screenheight = 500;

    InitWindow(screenwidth,screenheight, "20MIN RAYLIBS CHALLENGE");
    SetTargetFPS(60);

    while(!WindowShouldClose()){

        float dt = GetFrameTime();


        
        ghost.position.x += ghost.direction.x * (ghost.speed*dt);
        ghost.position.y += ghost.direction.y * (ghost.speed*dt);

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(ghost.position.x, ghost.position.y, 
        30, 30, ghost.color);

        if(ghost.position.x + boxsize >= 500){
        ghost.position.x = 500-boxsize;
        ghost.direction.x *= -1;
        ghost.color = BLACK;
        }
        if(ghost.position.x<=0){
        ghost.position.x = 0;
        ghost.direction.x *= -1;
        ghost.color = YELLOW;
        }
        if(ghost.position.y + boxsize>=500){
        ghost.position. y= 500-boxsize;
        ghost.direction.y *= -1;
        ghost.color = BROWN;
        }
        if(ghost.position.y<=0){
        ghost.position.y = 0;
        ghost.direction.y *= -1;
        ghost.color = BLUE;
        }

        EndDrawing();
    }
    CloseWindow();
}

