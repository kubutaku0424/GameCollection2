#include "DxLib.h"
#include "Game.h"
#include "Background.h"
#include "BoxFloor.h"
#include "Player.h"
#include "BoxFloor.h"
#include "Player.h"

Map_t Mapplace[100];//コンストラクタ作成(floor)
Player_s Playerplace[1];//コンストラクタ作成(player)

void Game_high_Initialize() {

	Box_Floor_Initialize();
	Background_Initialize();
	Player_Initialize();

	for (int i = 0; i < 100; i++) {

		Mapplace[i].Map_t::Map_t(i);
	}

	Playerplace[1].Player_s::Player_s();

}


void Game_high_Update() {
	Background_Update();

	Playerplace[1].Player_Fall(Mapplace[14].now_status,Mapplace[15].x);
}

void Game_high_Draw() {
	
	Background_Draw();

	for (int i = 0; i < 100; i++) {


		if (i % 5 == 0&&i>10) {
			Mapplace[i].now_status = false;
		}
		Mapplace[i].Draw();
	}

	Playerplace[1].Draw();

	DrawFormatString(30, 30, GetColor(255, 255, 255), "%d", Playerplace[1].y);
	//DrawFormatString(310, 30, GetColor(255, 255, 255), "%d", Mapplace[12].floor_move);

}


