#pragma once

#ifndef ENTITY_H
#define ENTITY_H

#include "libs.h"
#include "settings.h"


class Entity
{
public:
	Vector2 position;
	Rectangle rec; //rectangle 
	Texture2D texture;	


	Entity();
	Entity(std::string path);
	Entity(std::string path, float x, float y);
	void Draw();
};


#endif // !ENTITY_H