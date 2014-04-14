#include "card.h"

int attack(struct card_t *attacker, struct card_t *defender) {
	if ((attacker->power)>(defender->life)) {
		attacker->power-=defender->life;
		defender->life=0;
		}
	if ((defender->power)<(attacker->life)) {
		attacker->life-=defender->power;
		defender->power=0;
	}
	if ((attacker->power)>=(defender->life)) {
		return 1;
	}
	if ((defender->power)<=(attacker->life)) {
		return 2;
	}
	if ((attacker->life==0)&&(defender->life==0)) {
		return 0;
	}
	if ((attacker->life>0)&&(defender->life>0)) {
		return 3;
	}
}
