#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include "libs.h"
#include "Entity.h"


class Player : public Entity
{
protected:
	float speed;
	Entity entity;
public:
	Player(std::string texturePath);
	void Move();
};


#endif