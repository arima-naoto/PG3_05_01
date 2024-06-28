#pragma once
#include <memory>
#include "GameMain/header.file/Scene/IScene.h"
#include "GameMain/header.file/Scene/TitleScene.h"
#include "GameMain/header.file/Scene/StageScene.h"
#include "GameMain/header.file/Scene/ClearScene.h"
using namespace std;

/// <summary>
/// GameManegerクラスの作成
/// </summary>
class GameManeger
{
private://メンバ変数

	//シーンを保持するメンバ関数
	unique_ptr<IScene> sceneArr_[3];

	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_; //現在のシーン
	int prevSceneNo_; //前のシーン

public://メンバ関数

	GameManeger(); //コンストラクタ
	~GameManeger(); //デストラクタ

	//この関数をゲームループで呼び出す
	int Run(char* keys, char* preKeys);
};

