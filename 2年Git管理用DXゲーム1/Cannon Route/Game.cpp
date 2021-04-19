
#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"

int cannon_image;
//������
void Game_Initialize() {
    cannon_image= LoadDivGraph("image/cannon.png");    //�摜�̃��[�h
}

//�I������
void Game_Finalize() {
}

//�X�V
void Game_Update() {
    if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Esc�L�[��������Ă�����
        SceneMgr_ChangeScene(eScene_Menu);//�V�[�������j���[�ɕύX
    }
}

//�`��
void Game_Draw() {
    DrawGraph(0, 0, cannon_image, TRUE);
    DrawString(0, 0, "�Q�[����ʂł��B", GetColor(255, 255, 255));
    DrawString(0, 20, "Esc�L�[�������ƃ��j���[��ʂɖ߂�܂��B", GetColor(255, 255, 255));
}