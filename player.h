#pragma once

#include "card.h"
#include <iostream>

#define TRADE_TH 5

class Player
{
private:
  bool isBot = true;

public:
  Player(bool bot)
  {
    isBot = bot;
  }

  Player()
  {
    isBot = true;
  }

  Card card;

  std::string toString()
  {
    std::string ret = "This player possesses: " + card.value;
    return ret;
  }

  void trade(Player *player)
  {
    Card temp = card;
    card = player->card;
    player->card = card;
  }

  void takeTurn(Player *player)
  {
    if (isBot)
    {
      std::cout << "Player's value before: " << card.value << std::endl;
      if (card.value < TRADE_TH)
      {
        trade(player);
      }
      std::cout << "Player's value after: " << card.value << "\n\n";
    }
  }
};
