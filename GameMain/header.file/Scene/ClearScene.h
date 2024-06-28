#pragma once
#include "IScene.h"

/// <summary>
/// ISceneを継承したClearSceneを宣言する
/// </summary>
class ClearScene : public IScene
{
public://メンバ関数

	///初期化処理
	void Initialize() override;

	///更新処理
	void Update() override;

	///描画処理
	void Draw() override;
};
