#pragma once
#include <Novice.h>

/// <summary>
/// シーン名を列挙体(Enum)で定義
/// </summary>
enum Scene {
	TITLE,//シーンタイトル
	STAGE,//シーンステージ
	CLEAR,//シーンクリア
};

/// <summary>
/// シーン内での処理を行う基底クラス
/// </summary>
class IScene 
{
protected://メンバ変数

	//シーン番号を管理する変数
	static int sceneNo;

public://メンバ関数

	//継承先で実装される関数
	//抽象クラスなので純粋仮想関数とする

	/// 初期化処理
	virtual void Initialize() = 0;

	/// 更新処理
	virtual void Update() = 0;

	/// 描画処理
	virtual void Draw() = 0;

	/// 仮想デストラクタ
	virtual ~IScene();

	/// シーン番号ゲッター
	int GetSceneNo();
};

