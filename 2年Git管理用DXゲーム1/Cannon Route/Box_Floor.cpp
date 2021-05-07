#include "DxLib.h"
#include "Game_high.h"
#include "BoxFloor.h"

int cannon_box;//大砲の弾の画像変数
int floor0;//地面の画像変数
int floor1;//落ちるところの画像変数

float floor_move;//地面を動かす変数

Map_t::Map_t() {//コンストラクタ初期化(これがないと下のコンストラクタが使えないためこれを作っている)
	floor_box_number = 0;
	x = 0;
	y = 0;
	now_status = true;
};

Map_t::Map_t(int number){//コンストラクタ初期化
	floor_box_number = 0;
	x = 50*number;
	y = 200;
	now_status = true;

};


void Map_t::Draw() {//描画関数
	
	floor_move -= 0.01f;//地面を動かす

	if (now_status == true) {//trueの場合、
		DrawGraph(x+floor_move,y,floor0,TRUE);

	}
	else {//それ以外は
		DrawGraph(x+floor_move,y,floor1,TRUE);
	}
}
//初期化
void Box_Floor_Initialize() {
	//画像読み込み用
	floor0 = LoadGraph("image/floor.png");
	floor1 = LoadGraph("image/floor1.png");
	cannon_box = LoadGraph("image/cannon_box.png");
}

void  Map_t::Update() {
	
	//if (大砲の弾がちょうどかつnow_statusがfalseの時)
	//{
	//	now_status = true;
	//}

	
	
}







