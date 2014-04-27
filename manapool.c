#include "manapool.h"

int can_put_card(struct card_t card_to_put, struct manapool_t pool){
	if(card_to_put.price <= pool.price) {
		return 1;
	} else {
		return 0;
	}
}
int can_use_card(struct card_t *card, struct manapool_t *pool) {
}
int change_mana(struct manapool_t *manapool,int del) {
	manapool-> price += del;
}
