#include "manapool.h"


void init_manapool(struct manapool_t *manapool) {
	manapool->left = manapool->max=INTIAL_MANA;
}
void add_mana(struct manapool_t *manapool,int mana) {
	manapool->max += mana;
	if (manapool->max > MAX_MANA) {
	       manapool->max += MAX_MANA;
	}
}
void remove_mana(struct manapool_t *manapool,int mana) {
	manapool->max -= mana;
	if (manapool->max < MAX_MANA) {
	       manapool->max -= MAX_MANA;
	}
}
void add_max_mana(struct manapool_t *manapool,int mana) {
	manapool->max += mana;
	if (manapool->max > MAX_MANA) {
	       manapool->max = MAX_MANA;
	}
}
void put_mana(struct manapool_t *manapool) {
	manapool->left = manapool->max;
}
int can_put_card(struct card_t card_to_put, struct manapool_t pool){
         int result = pool->left - card_to_put.mana_cost;
         if (result>=0) {
         	return 1;
         }
         return 0;
}
