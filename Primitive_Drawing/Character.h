#pragma once
#include "Object.h"
#include "Bullet.h"
class Character : public Object {
	int health;
	Bullet bullet;
public:
	Character();
	~Character();
	virtual void shoot()=0;
};

