#include "DxLib.h"


int  cannon_image;//��C�摜�p�ϐ�
int cannon_box;//��C�̒e�̉摜�ϐ�


void Cannon_Initialize() {//������
	cannon_image = LoadGraph("image/cannon.png");//��C
	cannon_box = LoadGraph("image/cannon_box.png");//��C�̒e




}

void Cannon_Draw(){//�`��
	DrawRotaGraph(50,430 , 0.2, -0.3, cannon_image, TRUE);//��C�`��


}

void Cannon_Update() {//�X�V
	

}