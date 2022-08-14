#pragma once

#ifndef GAME_H
#define GAME_H

#include "libs.h"
#include "Map.h"


class Game
{
public:
	Map map;


	Game(int fps);
	~Game() noexcept;

	bool GameShouldClose() const;

	void Update(); //update variables
	void Draw(); //draw smthng
	void Tick(); //one iteration
};


#endif // !GAME_H
