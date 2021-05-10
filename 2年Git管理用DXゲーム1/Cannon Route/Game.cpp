#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"
#include "Game_high.h"

//������
void Game_Initialize() {
    Game_high_Initialize();//Game_high_Initialize�̊֐����̎Q��

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

    Game_high_Draw();

    DrawString(0, 0, "�Q�[����ʂł��B", GetColor(255, 255, 255));
    DrawString(0, 20, "Esc�L�[�������ƃ��j���[��ʂɖ߂�܂��B", GetColor(255, 255, 255));
}