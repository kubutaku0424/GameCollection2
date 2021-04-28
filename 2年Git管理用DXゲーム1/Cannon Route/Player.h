#pragma once

typedef struct Player_s {
public:
	int x, y;
	bool player_image;
	void Draw();
	Player_s();
};



void Player_Initialize();


