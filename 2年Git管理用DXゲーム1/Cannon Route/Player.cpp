#include "DxLib.h"
#include "Player.h"
#include "Game_high.h"
#include "BoxFloor.h"


//�ϐ��錾
int Player_image[24];//�v���C���[�̉摜�i�[�ϐ�
int player_move;//�摜�����p�ϐ�
int player_count;//�摜�ϊ��J�E���g

//�R���X�g���N�^������
Player_s::Player_s() {
	x = 60;
	y = 180;

	player_Collider = 10;
	player_image = true;
};
//������
void Player_Initialize() {
	player_move = 0;
	player_count = 0;


	LoadDivGraph("image/Player.png", 24, 6, 4, 16, 20, Player_image);//�v���C���[�`��
}
//�R���X�g���N�^�`��
void Player_s::Draw() {

	player_count++;

	if (player_count % 120 == 0) {//�J�E���g�����ɂȂ�Ə���

		//�Ղꂢ��[�̉摜������i�߂�
		player_move++;
	    //���Z�b�g
		player_count = 0;
	}
	//�v���C���[�̉摜�������Z�b�g
	if (player_move == 3) {
		player_move = 0;
	}

	//�摜�`��̏���
	if (player_image == true) {
		DrawGraph(x, y,Player_image[player_move],TRUE);
	}
}

void Player_s::Player_Fall(bool floor_Judgement,int floor_x) {

	if (floor_Judgement == false&&floor_x<100) {
		y++;

	}
	DrawFormatString(50, 30, GetColor(255, 255, 255), "%d", floor_x);

}



