#include "DxLib.h"
#include "Game.h"
#include "Background.h"
#include "BoxFloor.h"
#include "Player.h"
#include "BoxFloor.h"


Map_t Mapplace[100];

void Game_high_Initialize() {

	Box_Floor_Initialize();
	Background_Initialize();

	for (int i = 0; i < 100; i++) {
		Mapplace[i].Map_t::Map_t(i);
	}
}


void Game_high_Update() {
	Background_Update();


}

void Game_high_Draw() {
	
	Background_Draw();

	for (int i = 0; i < 100; i++) {
		Mapplace[i].Draw();
	}







}


