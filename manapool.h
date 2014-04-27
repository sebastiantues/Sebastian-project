#ifndef MANAPOOL_H
#define MANAPOOL_H
#include "card.h"
#include "deck.h"

struct manapool_t {
	int price;
	int max_price;
};

int can_put_card(struct card_t card_to_put, struct manapool_t pool);
int can_use_card(struct card_t *card, struct manapool_t *pool);
int change_mana(struct manapool_t *manapool,int del);

#endif
