#include "Entity.h"


Entity::Entity() = default;


Entity::Entity(std::string path)
{
	texture = LoadTexture(path.c_str());
	rec = { 0, 0, static_cast<float>(texture.width), static_cast<float>(texture.height) };
	position = { 0, 0 };
}


Entity::Entity(std::string path, float x, float y)
{
	texture = LoadTexture(path.c_str());
	rec = { x, y, static_cast<float>(texture.width), static_cast<float>(texture.height) };
	position = { x, y };
}


void Entity::Draw()
{
	DrawTextureRec(texture, rec, position, RAYWHITE);
}