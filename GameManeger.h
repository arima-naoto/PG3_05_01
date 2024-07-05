#pragma once
#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

/// <summary>
/// GameManegerクラスの作成
/// </summary>
class GameManeger
{
private://メンバ変数

	//シーンを保持するメンバ関数
	std::unique_ptr<IScene> sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_; //現在のシーン
	int prevSceneNo_; //前のシーン

public://メンバ関数

	GameManeger(); //コンストラクタ
	~GameManeger(); //デストラクタ

	//この関数をゲームループで呼び出す
	int Run();
};

