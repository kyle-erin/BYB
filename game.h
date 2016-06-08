#pragma once

#include "player.h"

class Game
{
private:
  Player startingPlayer;
  int round;

public:
  bool runGame();

  void revealCards();

  void trade();

  void start();
};
