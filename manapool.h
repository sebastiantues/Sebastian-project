#ifndef MANAPOOL_H
#define MANAPOOL_H
#define MAX_MANA 10
#define INTIAL_MANA 1
#include "card.h"
#include "deck.h"

struct manapool_t {
	int left;
	int max;
};

void init_manapool(struct manapool_t *manapool)
void add_mana(struct manapool_t *manapool,int mana)
void remove_mana(struct manapool_t *manapool,int mana);
void add_max_mana(struct manapool_t *manapool,int mana);
void put_mana(struct manapool_t *manapool);
int can_put_card(struct card_t card_to_put, struct manapool_t pool);

#endif
