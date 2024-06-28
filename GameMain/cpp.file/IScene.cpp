#include "GameMain/header.file/IScene.h"

//シーンはタイトルで初期化しておく
int IScene::sceneNo = Scene::TITLE;

//仮想デストラクタの定義
IScene::~IScene(){}

//シーン番号ゲッターの定義
int IScene::GetSceneNo() { return sceneNo; }