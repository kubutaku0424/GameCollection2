#pragma once
void Box_Floor_Initialize();//初期化用

//コンストラクタ作成
typedef struct Map_t{//地面のコンストラクタ
public:

	int floor_box_number;//何番目の画像になるか
	int x, y;//座標の変数
	bool now_status;//今の地面の状況
	Map_t();//コンストラクタ初期化用
	Map_t(int number);//↑同じく
	void Draw();//関数作成
	void Update();//関数作成

};




