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
	
	Background_image1 = LoadGraph("image/Background1.png");
	Background_image2 = LoadGraph("image/kumo.png");

}

void Background_Update()
{
	move_x_top-=0.5f;
	move_x_under -= 0.8f;

}

void Background_Draw() 
{
	
	DrawGraph(0+move_x_top, 0, Background_image1, TRUE);//��̔w�i�摜�̕`��
	DrawGraph(0+move_x_under, 280, Background_image2, TRUE);//���̔w�i�摜�̕`��
}