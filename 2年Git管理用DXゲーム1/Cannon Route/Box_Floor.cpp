#include "DxLib.h"
#include "Game_high.h"
#include "BoxFloor.h"

int cannon_box;//��C�̒e�̉摜�ϐ�
int floor0;//�n�ʂ̉摜�ϐ�
int floor1;//������Ƃ���̉摜�ϐ�

float floor_move;//�n�ʂ𓮂����ϐ�

Map_t::Map_t() {//�R���X�g���N�^������(���ꂪ�Ȃ��Ɖ��̃R���X�g���N�^���g���Ȃ����߂��������Ă���)
	floor_box_number = 0;
	x = 0;
	y = 0;
	now_status = true;
};

Map_t::Map_t(int number){//�R���X�g���N�^������
	floor_box_number = 0;
	x = 50*number;
	y = 200;
	now_status = true;

};


void Map_t::Draw() {//�`��֐�
	
	floor_move -= 0.01f;//�n�ʂ𓮂���

	if (now_status == true) {//true�̏ꍇ�A
		DrawGraph(x+floor_move,y,floor0,TRUE);

	}
	else {//����ȊO��
		DrawGraph(x+floor_move,y,floor1,TRUE);
	}
}
//������
void Box_Floor_Initialize() {
	//�摜�ǂݍ��ݗp
	floor0 = LoadGraph("image/floor.png");
	floor1 = LoadGraph("image/floor1.png");
	cannon_box = LoadGraph("image/cannon_box.png");
}

void  Map_t::Update() {
	
	//if (��C�̒e�����傤�ǂ���now_status��false�̎�)
	//{
	//	now_status = true;
	//}

	
	
}







