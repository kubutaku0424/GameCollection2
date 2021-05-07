#pragma once

typedef struct Player_s {
public:
	int x, y;
	int player_Collider;
	bool player_image;
	void Draw();
	Player_s();
	void Player_Fall(bool floor_Judgement,int floor_x);

};



void Player_Initialize();


