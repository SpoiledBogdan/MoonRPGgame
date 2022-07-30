#pragma once

#ifndef ENTITY_H
#define ENTITY_H

#include "libs.h"


class Entity
{
protected:
	Vector2 position;
	Texture2D texture;	
	Rectangle rec; //rectangle 
public:
	Vector2 getPos(void);
	void setPos(Vector2 newPosition);
	Entity();
	Entity(std::string path);
	void Draw();
};


#endif // !ENTITY_H