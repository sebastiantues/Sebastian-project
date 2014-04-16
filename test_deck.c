#include <stdio.h>
#include <string.h>
#include "card.h"

int main() {
struct card_t c1,c2;
	int push,draw,look;

	strcpy(c1.name, "card 1");
	c1.power = 5;
	c1.life = 5;
	c1.price = 5;

	strcpy(c2.name, "card 2");
	c2.power = 7;
	c2.life = 9;
	c2.price = 6;
	
	push = push_card(&c1, &c2);
	draw = draw_card(&c1, &c2);
	look = look_card(&c1, &c2);

	printf("%d",push);
	printf("%d",draw);
	printf("%d",look);

return 0;
}
