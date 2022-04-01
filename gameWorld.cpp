#include "gameWorld.h"

GameWorld::GameWorld() {
	gridLength = 2;
	setUpInitialState();
}

void GameWorld::setUpInitialState() {
	exitPos = sf::Vector2i(1, 0);
	playerPos = sf::Vector2i(gridLength-1, gridLength-1);
	setUpEnemyPositions();
	setUpTiles();
}

void GameWorld::setUpEnemyPositions() {
	enemyPositions.clear();
	enemyPositions.push_back(sf::Vector2i(0, 2));
	enemyPositions.push_back(sf::Vector2i(1, 0));
	enemyPositions.push_back(sf::Vector2i(2, 2));
}

void GameWorld::setUpTiles() {
	tiles.clear();
	std::vector<GameTile*> firstRow;
	firstRow.push_back(new GameTile("images/wall.png", 0, 0, false, false));
	firstRow.push_back(new GameTile("images/door.png", 50, 0, true, true));
	firstRow.push_back(new GameTile("images/wall.png", 100, 0, false, false));
	firstRow.push_back(new GameTile("images/wall.png", 150, 0, false, false));
	firstRow.push_back(new GameTile("images/wall.png", 200, 0, false, false));
	firstRow.push_back(new GameTile("images/wall.png", 250, 0, false, false));
	firstRow.push_back(new GameTile("images/enemy.png", 300, 0, true, false));
	firstRow.push_back(new GameTile("images/wall.png", 350, 0, false, false));
	tiles.push_back(firstRow);

	std::vector<GameTile*> secondRow;
	secondRow.push_back(new GameTile("images/wall.png", 0, 0, false, false));
	secondRow.push_back(new GameTile("images/door.png", 50, 0, true, true));
	secondRow.push_back(new GameTile("images/wall.png", 100, 0, false, false));
	secondRow.push_back(new GameTile("images/wall.png", 150, 0, false, false));
	secondRow.push_back(new GameTile("images/wall.png", 200, 0, false, false));
	secondRow.push_back(new GameTile("images/wall.png", 250, 0, false, false));
	secondRow.push_back(new GameTile("images/enemy.png", 300, 0, true, false));
	secondRow.push_back(new GameTile("images/wall.png", 350, 0, false, false));
	tiles.push_back(secondRow);

	
}