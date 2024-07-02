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
	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをTITLEに切り替える
		sceneNo = Scene::TITLE;

	}

}

/// <summary>
/// 描画処理
/// </summary>
void ClearScene::Draw() {
	Novice::ScreenPrintf(0, 0, "Clear Scene");
	Novice::ScreenPrintf(0, 20, "Push Space");
}