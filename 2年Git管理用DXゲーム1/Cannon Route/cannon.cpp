#include "DxLib.h"

const int MAX_SHOT = 10;
int Shot_x[MAX_SHOT];
int Shot_y[MAX_SHOT];
int is_Shot[MAX_SHOT];

int  cannon_image;//��C�摜�p�ϐ�
int cannon_box;//��C�̒e�̉摜�ϐ�

//bool ShotFlag;

int x;
int y;

void Cannon_Initialize() {//������
	cannon_image = LoadGraph("image/cannon.png");//��C
	cannon_box = LoadGraph("image/cannon_box.png");//��C�̒e

	x = 70;
	y = 380;

	//ShotFlag = false;

}

void Cannon_Draw(){//�`��
	DrawRotaGraph(50,430 , 0.2, -0.3, cannon_image, TRUE);//��C�`��

	if (CheckHitKey(KEY_INPUT_SPACE) != 0) {


		//ShotFlag = true;
		for (int i = 0; i < MAX_SHOT; i++) {
			is_Shot[i] = 1;
			if(is_Shot[i]==1){

			Shot_y[i] = y--;
			DrawGraph(x++, Shot_y[i], cannon_box, TRUE);
			break;
			}

			if (Shot_y[i] < 0) {
				is_Shot[i] = 0;
			}
		}
	}

	//if (y < -10) {
	//	ShotFlag = false;
	//	x = 70;
	//	y = 380;
	//}

}

void Cannon_Update() {//�X�V
	

	
	




}