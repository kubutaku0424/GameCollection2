#include "DxLib.h"
#include "Game.h"
#include "Background.h"
#include "Background_move.h"

int Background_image1;
int Background_image2;
int Background_image3;

void Background_move_Initialize() {
	Background_image1 = LoadGraph("image/Background_image1.png");
}


void Background_move_Update() {


}



void Background_move_Draw() {

	DrawModiGraph(0,0,640,0,640,240,0,240,Background_image1, TRUE);

}