#include "DxLib.h"
#include "Game_high.h"


typedef struct {
	int floor_box_number;
	int x, y;//座標の変数
	bool now_status;
	void Draw();
	void Update();
}Map_t;



Map_t Mapplace[100]={

	{1,0,200,true},
	{2,20,200,true},
	{3,40,200,false},










};


void Map_t::Draw() {
	if (now_status == true) {
		DrawGraph();

	}
	else {
		DrawGraph();
	}
}

void  Map_t::Update() {
	
	if (大砲の弾がちょうどかつnow_statusがfalseの時)
	{
		now_status = true;
	}
}


void Box_Floor_Initialize() {

}

void Box_Floor_Update() {

}

void Box_Floor_Draw() {

}


