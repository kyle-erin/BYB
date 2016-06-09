#include <iostream>
#include "game.h"
#include "card.h"

using namespace std;

bool Game::runGame()
{
  return true;
}

void Game::revealCards()
{
  for (int i = 0; i < playerCount; i++)
  {
    cout << "Player " << i + 1 << " has value of: " << players[i]->card.value << endl;
  }
}

void Game::loadGame(int count)
{
  playerCount = count;
  for (int i = 0; i < playerCount; i++)
  {
    players[i] = new Player();
  }
}

void Game::takeTurn()
{
  // Take a normal turn
  round++;
  int index = startIndex;
  cout << "Round: " << round << endl;
  cout << "Starting: " << startIndex << endl;

  // Do player card swapping
  Player *p;

  cout << "Taking player " << index << "'s turn." << endl;
  p = players[index];
  index++;
  index %= playerCount;
  p->takeTurn(players[index]);

  while (index != startIndex)
  {
    cout << "Taking player " << index << "'s turn." << endl;
    p = players[index];
    index++;
    index %= playerCount;
    p->takeTurn(players[index]);
  }

  startIndex++;
  startIndex %= playerCount;
}

void Game::start()
{
  int x = 0;
  string y = "";
  cout << "Welcome to Bone Your Buddy!" << endl;
  while (y.compare("y") != 0 && y.compare("Y") != 0)
  {
    cout << "How many players? ";
    cin >> x;
    cout << endl << "Is " << x << " players correct? (y/n)";
    cin >> y;
  }

  cout << endl << endl << "Starting game with " << x << " players..." << endl;

  loadGame(x);
}
