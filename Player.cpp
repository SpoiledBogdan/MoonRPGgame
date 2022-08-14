#include "Player.h"


Player::Player(std::string texturePath) :
	Entity(texturePath),
	speed(4.0f)
{
}


void Player::Move()
{
	if (IsKeyPressed(KEY_D))
	{
		position.x += settings::tileWidth;
		rec.x += texture.width;
	}
	if (IsKeyPressed(KEY_A))
	{
		position.x -= speed;
		rec.x -= GetFrameTime();
	}
	if (IsKeyPressed(KEY_W))
	{
		position.y -= speed;
		rec.y -= GetFrameTime();
	}
	if (IsKeyPressed(KEY_S))
	{
		position.y += speed;
		rec.y += GetFrameTime();
	}
}
