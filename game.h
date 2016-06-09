#pragma once

#include "player.h"
#include <list>

#define MAX_PLAYERS 10

using namespace std;

class Game
{
private:
  int startIndex;
  int round;
  int playerCount;
  Player *players[MAX_PLAYERS];

public:
  bool runGame();

  void revealCards();

  void trade(Player &p1, Player &p2);

  void start();

  void loadGame(int playerCount);

  void takeTurn();
};
