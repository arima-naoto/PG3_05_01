#pragma once
#include "Object.h"
class Bullet : public Object
{
public://メンバ関数

	void Initialize();

	void Update();

	void Draw();

	Vector2 GetPos();

	void SetPosition(Vector2 pos);

	Vector2 GetRadius();

	bool GetIsShot();

	bool SetIsShot(bool isShot);

private:

	bool isShot_;

};

