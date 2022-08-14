#pragma once

#ifndef ENEMY_H
#define ENEMY_H

#include "Entity.h"


class Enemy : public Entity
{
public:
	Entity entity;
	float speed;


	Enemy(std::string texturePath);
	void Move();
};


#endif

