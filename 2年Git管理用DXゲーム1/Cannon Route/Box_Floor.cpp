#include "DxLib.h"
#include "Game_high.h"


typedef struct {
	int floor_box_number;
	int x, y;//À•W‚Ì•Ï”
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
	
	if (‘å–C‚Ì’e‚ª‚¿‚å‚¤‚Ç‚©‚Ânow_status‚ªfalse‚Ì)
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


