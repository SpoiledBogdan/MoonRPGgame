#include "Entity.h"


Vector2 Entity::getPos(void)
{
	return position;
}

void Entity::setPos(Vector2 newPosition)
{
	position = newPosition;
}

Entity::Entity() = default;


Entity::Entity(std::string path)
{
	texture = LoadTexture(path.c_str());
	rec = { 0, 0, static_cast<float>(texture.width), static_cast<float>(texture.height) };
	position = { 0, 0 };
}


void Entity::Draw()
{
	DrawTextureRec(texture, rec, position, RAYWHITE);
}