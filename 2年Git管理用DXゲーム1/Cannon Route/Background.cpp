#include "DxLib.h"
#include "Game_high.h"
#include "Game.h"
#include "Background.h"


//�ړ��ϐ�
float move_x_top;//��̔w�i�̈ړ��ϐ�
float move_x_under;//���̔w�i�̈ړ��ϐ�

//�摜�ϐ�
int Background_image1;//��̔w�i�̉摜
int Background_image2;//���̔w�i�̉摜


void Background_Initialize()
{

	move_x_top = 0;//������
	move_x_under = 0;//������
	
	Background_image1 = LoadGraph("image/Background1.png");//�摜������
	Background_image2 = LoadGraph("image/kumo.png");//�摜������

}

void Background_Update()
{
	if (move_x_top <= -640) {//��̔w�i�̃��[�v����
		move_x_top = 0;
    }

	if (move_x_under <= -640) {//���̔w�i�̃��[�v����
		move_x_under = 0;
	}

	move_x_top-=0.5f;//��w�i�̈ړ�����
	move_x_under -= 0.8f;//���w�i�̈ړ�����


}

void Background_Draw() 
{
	DrawGraph(0+move_x_top, 0, Background_image1, TRUE);//��̔w�i�摜�̕`��
	DrawGraph(640 + move_x_top, 0, Background_image1, TRUE);//��̔w�i�摜(2����)�̕`��

	DrawGraph(0+move_x_under, 280, Background_image2, TRUE);//���̔w�i�摜�̕`��
	DrawGraph(640 + move_x_under, 280, Background_image2, TRUE);//���̔w�i�摜(2����)�̕`��
}