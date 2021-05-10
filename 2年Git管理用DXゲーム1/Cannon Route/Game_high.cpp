#include "DxLib.h"
#include "Game.h"
#include "Background.h"
#include "BoxFloor.h"
#include "Player.h"
#include "BoxFloor.h"
#include "Player.h"
#include "cannon.h"



void Game_high_Initialize() {

	Box_Floor_Initialize();
	Background_Initialize();
	Player_Initialize();
	Cannon_Initialize();

}


void Game_high_Update() {
	Background_Update();
	Box_Floor_Update();
	Cannon_Update();
}

void Game_high_Draw() {
	
	Background_Draw();
	Box_Floor_Draw();
	Player_Draw();
	Cannon_Draw();



}


