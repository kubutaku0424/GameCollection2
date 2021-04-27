#include "DxLib.h"
#include "Game_high.h"
#include "BoxFloor.h"

int floor0;
int floor1;

Map_t::Map_t() {
	floor_box_number = 0;
	x = 0;
	y = 0;
	now_status = true;
};

Map_t::Map_t(int number){
	floor_box_number = 0;
	x = 50*number;
	y = 200;
	now_status = true;

};


void Map_t::Draw() {

	if (now_status == true) {
		DrawGraph(x,y,floor0,TRUE);

	}
	else {
		DrawGraph(x,y,floor1,TRUE);
	}
}

void Box_Floor_Initialize() {
	floor0 = LoadGraph("image/floor0.png");
	floor1 = LoadGraph("image/floor1.png");
}

void  Map_t::Update() {
	
	//if (‘å–C‚Ì’e‚ª‚¿‚å‚¤‚Ç‚©‚Ânow_status‚ªfalse‚ÌŽž)
	//{
	//	now_status = true;
	//}
}





