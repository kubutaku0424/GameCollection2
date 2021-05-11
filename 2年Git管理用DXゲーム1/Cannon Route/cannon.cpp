#include "DxLib.h"


int x;
int y;

int  cannon_image;//‘å–C‰æ‘œ—p•Ï”
int cannon_box;//‘å–C‚Ì’e‚Ì‰æ‘œ•Ï”

bool ShotFlag;



void Cannon_Initialize() {//‰Šú‰»
	cannon_image = LoadGraph("image/cannon.png");//‘å–C
	cannon_box = LoadGraph("image/cannon_box.png");//‘å–C‚Ì’e

	ShotFlag = false;

	x = 70;
	y = 380;

}

void Cannon_Draw(){//•`‰æ
	DrawRotaGraph(50,430 , 0.2, -0.3, cannon_image, TRUE);//‘å–C•`‰æ

	if (CheckHitKey(KEY_INPUT_SPACE) != 0) {

		ShotFlag = true;
	}
	DrawFormatString(100, 100, GetColor(255, 255, 255), "%d", ShotFlag);

	if (ShotFlag == true) {
		DrawGraph(x++, y--, cannon_box, TRUE);
		
	}

	if (y < -10) {
		ShotFlag = false;
		x = 70;
		y = 380;
	}

}

void Cannon_Update() {//XV
	

	
	




}