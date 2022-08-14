#include "Location.h"


Location::Location() :
	ground1 ("D:\\Projects\\CPP_ESSENTIALS\\MoonRPGgame\\Textures\\ground1.png"),
	ground2 ("D:\\Projects\\CPP_ESSENTIALS\\MoonRPGgame\\Textures\\ground2.png"),
	test    ("D:\\Projects\\CPP_ESSENTIALS\\MoonRPGgame\\Textures\\test.png")
{ }


void Location::Draw(std::vector<int> numLocation)
{

	int j = 0;

	for (float y = 0; y < settings::mapHeight; y += settings::tileHeight)
	{
		for (float x = 0; x < settings::mapWidth; x += settings::tileWidth)
		{
			if (j < numLocation.size())
			{
				Vector2 newPos = { x, y };

				switch (numLocation[j])
				{
				case 0:
					tileMap.push_back(ground1);
					break;
				case 1:
					tileMap.push_back(ground2);
					break;
				case 2:
					tileMap.push_back(test);
					break;
				}

				tileMap.back().position = newPos;
				tileMap.back().rec.x = newPos.x;
				tileMap.back().rec.y = newPos.y;

				tileMap.back().Draw();
				j++;
			}
		}
	}
}


