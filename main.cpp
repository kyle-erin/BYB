#include <iostream>
#include "game.h"

using namespace std;

int main()
{
  bool runGame = true;
  Game* g = new Game();
  g-> start();

  while(runGame)
  {
    runGame = g -> runGame();
  }
  return 0;
}