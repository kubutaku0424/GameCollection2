#include "DxLib.h"


int x;
int y;

int  cannon_image;//��C�摜�p�ϐ�
int cannon_box;//��C�̒e�̉摜�ϐ�

bool ShotFlag;



void Cannon_Initialize() {//������
	cannon_image = LoadGraph("image/cannon.png");//��C
	cannon_box = LoadGraph("image/cannon_box.png");//��C�̒e

	ShotFlag = false;

	x = 70;
	y = 380;

}

void Cannon_Draw(){//�`��
	DrawRotaGraph(50,430 , 0.2, -0.3, cannon_image, TRUE);//��C�`��

	if (CheckHitKey(KEY_INPUT_SPACE) != 0) {

		ShotFlag = true;
	}
	DrawFormatString(100, 100, GetColor(255, 255, 255), "%d", ShotFlag);

	if (ShotFlag == true) {
		DrawGraph(x++, y--, cannon_box, TRUE);
		
	}

	if (y < -10) {
		ShotFlag = false;
		x = 70;
		y = 380;
	}

}

void Cannon_Update() {//�X�V
	

	
	




}