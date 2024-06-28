#pragma once
#include "Object.h"
#include "Bullet.h"

class Player : public Object
{
public:

	void Initialize();

	void Update(char *keys,char *preKeys);

	void Draw();

private:

	Bullet* bullet;


};

