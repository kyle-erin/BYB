#include <iostream>
#include "game.h"
#include <windows.h>

#define SLEEP_TIME 2000

using namespace std;

int main()
{
  bool runGame = true;
  Game *g = new Game();
  g->start();
  string x;

  while (runGame)
  {
    runGame = g->runGame();
    g->takeTurn();
    cin >> x;
    cout << x;
  }

  return 0;
}