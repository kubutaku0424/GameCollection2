#pragma once
void Box_Floor_Initialize();//�������p

//�R���X�g���N�^�쐬
typedef struct Map_t{//�n�ʂ̃R���X�g���N�^
public:

	int floor_box_number;//���Ԗڂ̉摜�ɂȂ邩
	int x, y;//���W�̕ϐ�
	bool now_status;//���̒n�ʂ̏�
	Map_t();//�R���X�g���N�^�������p
	Map_t(int number);//��������
	void Draw();//�֐��쐬
	void Update();//�֐��쐬

};




