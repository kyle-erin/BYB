#pragma once

#include "card.h"

#define TYPE_SIZE 13
#define SUITE_SIZE 4

const int DECK_SIZE = TYPE_SIZE * SUITE_SIZE;

class Deck
{
private:
  Deck();
  Card m_cards[DECK_SIZE];

public:
  void reset();
};
