#include "TitleScene.h"

/// <summary>
/// 初期化処理
/// </summary>
void TitleScene::Initialize() {
}

/// <summary>
/// 更新処理
/// </summary>
void TitleScene::Update(char* keys, char* preKeys) {

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {

		//シーンをSTAGEに切り替える
		sceneNo = Scene::STAGE;

	}

}

/// <summary>
/// 描画処理
/// </summary>
void TitleScene::Draw() {
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, RED, kFillModeSolid);
	Novice::ScreenPrintf(640, 350, "Push Space");
}

