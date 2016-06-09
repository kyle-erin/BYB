#include "deck.h"

Deck::Deck()
{
  for(int i = 0; i < SUITE_SIZE; i++)
  {
    for(int j = 0; j < TYPE_SIZE; j++)
    {
      m_cards[j] = Card();
    }
  }
}
