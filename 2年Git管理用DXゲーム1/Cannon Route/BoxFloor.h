#pragma once
void Box_Floor_Initialize();

typedef struct Map_t{
public:

	int floor_box_number;
	int x, y;//���W�̕ϐ�
	bool now_status;
	Map_t();
	Map_t(int number);
	void Draw();
	void Update();
};




