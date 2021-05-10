#include "DxLib.h"


int  cannon_image;//‘å–C‰æ‘œ—p•Ï”
int cannon_box;//‘å–C‚Ì’e‚Ì‰æ‘œ•Ï”


void Cannon_Initialize() {//‰Šú‰»
	cannon_image = LoadGraph("image/cannon.png");//‘å–C
	cannon_box = LoadGraph("image/cannon_box.png");//‘å–C‚Ì’e




}

void Cannon_Draw(){//•`‰æ
	DrawRotaGraph(50,430 , 0.2, -0.3, cannon_image, TRUE);//‘å–C•`‰æ


}

void Cannon_Update() {//XV
	

}