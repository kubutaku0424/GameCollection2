#include "DxLib.h"
#include "Game_high.h"
#include "BoxFloor.h"
#include "Player.h"

int floor0;//�n�ʂ̉摜�ϐ�
int floor1;//������Ƃ���̉摜�ϐ�

Map_t Mapplace[100] = {//�C���X�^���X��
	{0,0.0,200.0,true},//�u���b�N�ԍ��Ax���W�Ay���W�A�X�e�[�^�X
	{1,50.0,200.0,true},
	{2,100.0,200.0,true},
	{3,150.0,200.0,true},
	{4,200.0,200.0,true},
	{5,250.0,200.0,true},
	{6,300.0,200.0,true},
	{7,350.0,200.0,true},
	{8,400.0,200.0,true},
	{9,450.0,200.0,true},
	{10,500.0,200.0,true},
	{11,550.0,200.0,true},
	{12,600.0,200.0,true},
	{13,650.0,200.0,true},
	{14,700.0,200.0,true},
	{15,750.0,200.0,true},
	{16,800.0,200.0,false},
	{17,850.0,200.0,true},
	{18,900.0,200.0,true},
	{19,950.0,200.0,false},
	{20,1000.0,200.0,true},
	{21,1050.0,200.0,true},
	{22,1100.0,200.0,false},
	{23,1150,200.0,true},
	{24,1200,200.0,true},
	{25,1250,200.0,false},
	{26,1300,200.0,true},
	{27,1350.0,200.0,true},
	{28,1400.0,200.0,false},
	{29,1450.0,200.0,true},
	{30,1500.0,200.0,true},
	{31,1550.0,200.0,false},
	{32,1600.0,200.0,true},
	{33,1650.0,200.0,true},
	{34,1700.0,200.0,false},
	{35,1750,200.0,true},
	{36,1800,200.0,true},
	{37,1850,200.0,false},
	{38,1900,200.0,true},
};


//������
void Box_Floor_Initialize() {
	//�摜�ǂݍ��ݗp
	floor0 = LoadGraph("image/floor.png");
	floor1 = LoadGraph("image/floor1.png");

}

void Box_Floor_Draw() {

	
	for (int i = 0; i < 100; i++) {
		if (Mapplace[i].now_status == true) {//�{�b�N�X�̕`�攻��J�n(true��)
			DrawGraph(Mapplace[i].x--, Mapplace[i].y, floor0, TRUE);
		}
		else {
			DrawGraph(Mapplace[i].x--, Mapplace[i].y, floor1, TRUE);
		}

	}
}
void Box_Floor_Update() {
	for (int i = 0; i < 100; i++) {
		fall_flag(Mapplace[i].x, Mapplace[i].y, Mapplace[i].now_status);
	}
}







