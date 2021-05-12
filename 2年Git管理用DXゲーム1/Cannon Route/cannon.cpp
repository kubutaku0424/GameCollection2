#include "DxLib.h"

const int MAX_SHOT = 10;
int Shot_x[MAX_SHOT];
int Shot_y[MAX_SHOT];
int is_Shot[MAX_SHOT];

int  cannon_image;//‘å–C‰æ‘œ—p•Ï”
int cannon_box;//‘å–C‚Ì’e‚Ì‰æ‘œ•Ï”

//bool ShotFlag;

int x;
int y;

void Cannon_Initialize() {//‰Šú‰»
	cannon_image = LoadGraph("image/cannon.png");//‘å–C
	cannon_box = LoadGraph("image/cannon_box.png");//‘å–C‚Ì’e

	x = 70;
	y = 380;

	//ShotFlag = false;

}

void Cannon_Draw(){//•`‰æ
	DrawRotaGraph(50,430 , 0.2, -0.3, cannon_image, TRUE);//‘å–C•`‰æ

	if (CheckHitKey(KEY_INPUT_SPACE) != 0) {


		//ShotFlag = true;
		for (int i = 0; i < MAX_SHOT; i++) {
			is_Shot[i] = 1;
			if(is_Shot[i]==1){

			Shot_y[i] = y--;
			DrawGraph(x++, Shot_y[i], cannon_box, TRUE);
			break;
			}

			if (Shot_y[i] < 0) {
				is_Shot[i] = 0;
			}
		}
	}

	//if (y < -10) {
	//	ShotFlag = false;
	//	x = 70;
	//	y = 380;
	//}

}

void Cannon_Update() {//XV
	

	
	




}