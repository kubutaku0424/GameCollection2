
#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"

int cannon_image;
//初期化
void Game_Initialize() {
    cannon_image= LoadDivGraph("image/cannon.png");    //画像のロード
}

//終了処理
void Game_Finalize() {
}

//更新
void Game_Update() {
    if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Escキーが押されていたら
        SceneMgr_ChangeScene(eScene_Menu);//シーンをメニューに変更
    }
}

//描画
void Game_Draw() {
    DrawGraph(0, 0, cannon_image, TRUE);
    DrawString(0, 0, "ゲーム画面です。", GetColor(255, 255, 255));
    DrawString(0, 20, "Escキーを押すとメニュー画面に戻ります。", GetColor(255, 255, 255));
}