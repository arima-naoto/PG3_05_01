#include "StageScene.h"
/// <summary>
/// 初期化処理
/// </summary>
void StageScene::Initialize() {}

/// <summary>
/// 更新処理
/// </summary>
void StageScene::Update(char* keys, char* preKeys) {

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをCLEARに変える
		sceneNo = Scene::CLEAR;

	}

}

/// <summary>
/// 描画処理
/// </summary>
void StageScene::Draw() {
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 20, "Push Space");
}


