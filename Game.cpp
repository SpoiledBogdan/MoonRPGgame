#include "Game.h"


Game::Game(int fps)
{
	SetTargetFPS(fps);
}


Game::~Game() noexcept
{
	CloseWindow();
}


bool Game::GameShouldClose() const
{
	return WindowShouldClose();
}


void Game::Update()
{
	map.Update();
}


void Game::Draw()
{
	ClearBackground(RAYWHITE);
	map.Draw();
}


void Game::Tick()
{
	BeginDrawing();
	Update();
	Draw();
	EndDrawing();
}
