#include <iostream>
#include "game.h"

using namespace std;

bool Game::runGame()
{ }

void Game::revealCards()
{ }

void Game::trade()
{ }

void Game::start()
{
  int x;
  string y;
  cout << "Welcome to Bone Your Buddy!" << endl;
  while (y.compare("y") == 0 || y.compare("Y") == 0)
  {
    cout << "How many players? ";
    cin >> x;
    cout << endl << "Is " << x << " players correct? (y/n)";
    cin >> y;
  }
}