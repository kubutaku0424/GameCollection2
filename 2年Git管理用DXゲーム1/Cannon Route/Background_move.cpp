#include "DxLib.h"
#include "Game.h"
#include "Background.h"
#include "Background_move.h"

int Background_image1;
int Background_image2;
int Background_image3;

void Background_move_Initialize() {
	Background_image1 = LoadGraph("image/floor0.png");
}


void Background_move_Update() {


}



void Background_move_Draw() {

	DrawRotaGraph(100, 200, 1.0, 0, Background_image1, TRUE);

}