#include "DxLib.h"
#include "Player.h"
#include "Game_high.h"
#include "BoxFloor.h"
#include <math.h>

int Player_image[24];

double x;//player‚ÌxÀ•W
double y;//player‚ÌyÀ•W

bool judgment;


//‰Šú‰»
void Player_Initialize() {
	x = 20.0;
	y = 190.0;
    LoadDivGraph("image/Player.png", 24, 6, 4, 16, 20, Player_image);
	judgment = false;
}
void Player_Draw() {
	DrawRotaGraph(x, y,1.5,0, Player_image[0], TRUE);

}

void Player_Update() {

}

void fall_flag(double fx, double fy,bool now_status) {

	double ans = sqrt((x - fx) * (x - fx) + (y - fy) * (y - fy));
	if (ans < 20&&now_status==false) {
		judgment = true;
	}
	if (judgment == true) {
		y+=0.01;
	}
	
}

