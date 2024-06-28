#include <Novice.h>
#include <GameManeger.h>

const char kWindowTitle[] = "GC2A_02_アリマ_ナオト";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	//GameManegerクラスのインスタンスを作成する
	GameManeger* gameManeger = new GameManeger();

	//GameManegerクラスからメンバ関数Runを呼び出す
	gameManeger->Run(keys, preKeys);

	
	// ライブラリの終了
	Novice::Finalize();
	delete gameManeger;//GameManegerを解放する
	return 0;
}
