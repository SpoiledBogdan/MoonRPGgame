#include "Player.h"


Player::Player(std::string texturePath) :
	Entity(texturePath),
	speed(2.0f)
{
}


void Player::Move()
{
	if (IsKeyDown(KEY_D)) Entity::position.x += speed;
	if (IsKeyDown(KEY_A)) Entity::position.x -= speed;
	if (IsKeyDown(KEY_W)) Entity::position.y -= speed;
	if (IsKeyDown(KEY_S)) Entity::position.y += speed;
}
