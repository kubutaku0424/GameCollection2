#include "DxLib.h"
#include "Player.h"
#include "Game_high.h"

//変数宣言
int Player_image[24];//プレイヤーの画像格納変数
int player_move;//画像分割用変数
int player_count;//画像変換カウント

//コンストラクタ初期化
Player_s::Player_s() {
	x = 20;
	y = 180;
	player_image = true;
};
//初期化
void Player_Initialize() {
	player_move = 0;
	player_count = 0;

	LoadDivGraph("image/Player.png", 24, 6, 4, 16, 20, Player_image);//プレイヤー描画
}
//コンストラクタ描画
void Player_s::Draw() {

	player_count++;

	if (player_count % 120 == 0) {//カウントが一定になると処理

		//ぷれいやーの画像分割を進める
		player_move++;
	    //リセット
		player_count = 0;
	}
	//プレイヤーの画像分割リセット
	if (player_move == 3) {
		player_move = 0;
	}

	//画像描画の処理
	if (player_image == true) {
		DrawGraph(x, y,Player_image[player_move],TRUE);
	}
}



