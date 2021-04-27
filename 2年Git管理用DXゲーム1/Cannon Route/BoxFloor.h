#pragma once
void Box_Floor_Initialize();

typedef struct Map_t{
public:

	int floor_box_number;
	int x, y;//À•W‚Ì•Ï”
	bool now_status;
	Map_t();
	Map_t(int number);
	void Draw();
	void Update();
};




