#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"
#include "Game_high.h"

//初期化
void Game_Initialize() {
    Game_high_Initialize();//Game_high_Initializeの関数化の参照

}

//終了処理
void Game_Finalize() {
}

//更新
void Game_Update() {

    Game_high_Update();//Game_high_Updateの関数化の参照

    if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Escキーが押されていたら
        SceneMgr_ChangeScene(eScene_Menu);//シーンをメニューに変更
    }
}

//描画
void Game_Draw() {

    Game_high_Draw();

    DrawString(0, 0, "ゲーム画面です。", GetColor(255, 255, 255));
    DrawString(0, 20, "Escキーを押すとメニュー画面に戻ります。", GetColor(255, 255, 255));
}