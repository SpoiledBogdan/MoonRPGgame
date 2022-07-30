#include "Map.h"



Map::Map() :
	player  ("D:\\Projects\\CPP_ESSENTIALS\\MoonRPGgame\\Textures\\player.png")
{
	
}


void Map::Update()
{
	player.Move();

	if (player.getPos().x > 800.0f)
	{
		player.setPos({ 0, 0 });
		location.state++;
	}

	else if (player.getPos().x < -0.1f && location.state != 0)
	{
		player.setPos({ 800, 0 });
		location.state--;
	}
}

void Map::Draw()
{

	if (location.state == 0)
	{
		location.DrawLoc1();
	}

	else if (location.state == 1)
	{
		location.DrawLoc2();
	}

	player.Draw();
	std::cout << player.getPos().x << std::endl;

	
}

