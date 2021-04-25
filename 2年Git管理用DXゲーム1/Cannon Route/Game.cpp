#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"
#include "Game_high.h"
#include "Background_move.h"


int cannon_image;
//������
void Game_Initialize() {
    Game_high_Initialize();//Game_high_Initialize�̊֐����̎Q��

    cannon_image= LoadGraph("image/cannon.png");    //�摜�̃��[�h
}

//�I������
void Game_Finalize() {
}

//�X�V
void Game_Update() {

    Game_high_Update();//Game_high_Update�̊֐����̎Q��

    if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Esc�L�[��������Ă�����
        SceneMgr_ChangeScene(eScene_Menu);//�V�[�������j���[�ɕύX
    }
}

//�`��
void Game_Draw() {
    DrawBox(0, 0, 640, 480, GetColor(255, 255, 255), TRUE);//�S�̂̔w�i(���F)

    Game_high_Draw();

    DrawRotaGraph(120, 400, 0.35,-0.15, cannon_image, TRUE);
    DrawString(0, 0, "�Q�[����ʂł��B", GetColor(255, 255, 255));
    DrawString(0, 20, "Esc�L�[�������ƃ��j���[��ʂɖ߂�܂��B", GetColor(255, 255, 255));
}