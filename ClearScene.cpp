#include "ClearScene.h"

/// <summary>
/// 初期化処理
/// </summary>
void ClearScene::Initialize() {
}

/// <summary>
/// 更新処理
/// </summary>
void ClearScene::Update(char* keys, char* preKeys) {

	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {

		sceneNo = Scene::TITLE;

	}

}

/// <summary>
/// 描画処理
/// </summary>
void ClearScene::Draw() {
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, GREEN, kFillModeSolid);
	Novice::ScreenPrintf(640, 350, "Push Space");
}