#pragma once
#include "settings.h"
#include "Entity.h"

class Location : public Entity
{
protected:
	//locations
	std::vector<int> start;
	std::vector<int> map1;

	Entity ground1;
	Entity ground2;
	Entity test;

	std::vector<Entity> tileMap;
public:
	Location();

	int state;
	int getState();
	void setState(int locationState);

	void DrawLocation(std::vector<int> location);
	void DrawLoc1();
	void DrawLoc2();
};

