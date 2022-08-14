#include "Enemy.h"

Enemy::Enemy(std::string texturePath) :
	Entity(texturePath),
	speed(2.0f)
{
}

void Enemy::Move()
{
	if (position.x < 100.0f)
	{
		position.x += speed;
		rec.x += GetFrameTime();
	}

}
