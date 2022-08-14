#pragma once

#ifndef MAP_H
#define MAP_H

#include "settings.h"
#include "Player.h"
#include "Enemy.h"
#include "Location.h"


class Map
{
public:
	Player player;
	Enemy enemy;
	Vector2 locationState;
	int locationsAmount;
	std::vector<Location> locations;


	Map();

	void Update();
	void Draw();
};


#endif // !MAP_H
