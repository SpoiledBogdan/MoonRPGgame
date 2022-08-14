#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"


class Player : public Entity
{
public:
	Entity entity;
	float speed;


	Player(std::string texturePath);
	void Move();
};


#endif