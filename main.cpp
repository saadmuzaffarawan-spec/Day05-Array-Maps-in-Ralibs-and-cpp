#include <raylib.h>
using namespace std;

int main(){

    const int screenwidth = 500, screenheight = 500;

    const int tilesize = 50;

    int rows = screenwidth/tilesize;
    int cols = screenheight/tilesize;

    Vector2 player= 
    {
        50+tilesize,
        50+tilesize
    };

    float speed = 200.0f;

    //to remember; 1 for road, 0 for land, 2 for water
    int Citymap[rows][cols] = 
    {
    {2,2,2,2,2,2,2,2,2,2},
    {2,1,1,1,1,1,1,1,1,2},
    {2,1,1,1,1,1,1,1,1,2},
    {2,1,0,0,0,0,0,0,1,2},
    {2,1,0,0,0,0,0,0,1,2},
    {2,1,0,0,0,0,0,0,1,2},
    {2,1,0,0,0,0,0,0,1,2},
    {2,1,1,1,1,1,1,1,1,2},
    {2,1,1,1,1,1,1,1,1,2},
    {2,2,2,2,2,2,2,2,2,2}
    };

    InitWindow(screenwidth, screenheight, "Understanding Maps in Raylibs and Cpp");
    InitAudioDevice();
    SetTargetFPS(60);
    SetConfigFlags(FLAG_VSYNC_HINT);

    while(!WindowShouldClose()){
    float dt = GetFrameTime();

     BeginDrawing();
     ClearBackground(RAYWHITE);
     for(int i = 0 ; i<=rows; i++ ){
        for(int j = 0; j<=cols; j++){
           if(Citymap[i][j] == 1){
           DrawRectangle(i*tilesize,j*tilesize, 50,50, BLACK);
           DrawRectangleLines(i*tilesize,j*tilesize, 50,50, RED);
           }
           if(Citymap[i][j] == 0){
           DrawRectangle(i*tilesize,j*tilesize, 50,50, BROWN);
           DrawRectangleLines(i*tilesize,j*tilesize, 50,50, RED);
           }
           if(Citymap[i][j] == 2){
           DrawRectangle(i*tilesize,j*tilesize, 50,50, BLUE);
           DrawRectangleLines(i*tilesize,j*tilesize, 50,50, RED);
           }
        }
     }



    if( IsKeyDown(KEY_A)|| IsKeyDown(KEY_LEFT)){
        player.x -= speed*dt;
    }
    if( IsKeyDown(KEY_D)|| IsKeyDown(KEY_RIGHT)){
        player.x += speed*dt;
    }
    if( IsKeyDown(KEY_W)|| IsKeyDown(KEY_UP)){ 
        player.y -= speed*dt; 
    }
    if( IsKeyDown(KEY_S)|| IsKeyDown(KEY_DOWN)){
        player.y += speed*dt;
    }

    int tilex = player.x/tilesize;
    int tiley = player.y/tilesize;

    int tiletype = Citymap[tilex][tiley];

    if(tiletype == 0){
     speed = 100.0f;
    }
    else{
        speed = 200.0f;
    }

    DrawRectangle(player.x, player.y,50, 50, RED);

    EndDrawing();
    }
    CloseAudioDevice();
    CloseWindow();
}