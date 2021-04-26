#include "DxLib.h"
#include "Game_high.h"
#include "Game.h"
#include "Background.h"


//ˆÚ“®•Ï”
float move_x_top;//ã‚Ì”wŒi‚ÌˆÚ“®•Ï”
float move_x_under;//‰º‚Ì”wŒi‚ÌˆÚ“®•Ï”

//‰æ‘œ•Ï”
int Background_image1;//ã‚Ì”wŒi‚Ì‰æ‘œ
int Background_image2;//‰º‚Ì”wŒi‚Ì‰æ‘œ




void Background_Initialize()
{

	move_x_top = 0;//‰Šú‰»
	move_x_under = 0;//‰Šú‰»
	
	Background_image1 = LoadGraph("image/Background1.png");
	Background_image2 = LoadGraph("image/kumo.png");

}

void Background_Update()
{
	move_x_top-=0.5f;
	move_x_under -= 0.8f;

}

void Background_Draw() 
{
	
	DrawGraph(0+move_x_top, 0, Background_image1, TRUE);//ã‚Ì”wŒi‰æ‘œ‚Ì•`‰æ
	DrawGraph(0+move_x_under, 280, Background_image2, TRUE);//‰º‚Ì”wŒi‰æ‘œ‚Ì•`‰æ
}