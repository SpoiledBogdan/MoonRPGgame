#pragma once

#ifndef LOCATION_H
#define LOCATION_H

#include "settings.h"
#include "Entity.h"


class Location : public Entity
{
public:
	//tiles
	Entity ground1;
	Entity ground2;
	Entity test;

	std::vector<Entity> tileMap;
	std::vector<int> numLocation;


	Location();

	void Draw(std::vector<int> location);
};


#endif // !LOCATION_H