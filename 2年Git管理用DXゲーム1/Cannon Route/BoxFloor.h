#pragma once


typedef struct {//構造体宣言
	int now_place;
	double x, y;
	bool now_status;

}Map_t;

void Box_Floor_Initialize();//初期化用

void Box_Floor_Draw();

void Box_Floor_Update();





