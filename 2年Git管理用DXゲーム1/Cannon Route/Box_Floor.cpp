#include "DxLib.h"
#include "Game_high.h"
int Floor0;










void Box_Floor_Initialize() {
	Floor0 = LoadGraph("image/floor0.png");
}

void Box_Floor_Update() {

}

void Box_Floor_Draw() {
	DrawGraph(20, 20, Floor0, TRUE);

}


