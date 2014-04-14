#ifndef CARD_H
#define CARD_H

struct card_t {
	char name[10];
	int power;
	int life;
	int price;
};

int attack(struct card_t *attacker, struct card_t *defender);

#endif
