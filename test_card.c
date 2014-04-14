#include<string.h>
#include<stdio.h>
#include "card.h"
int main () {
	struct card_t c1,c2;
	int result;

	strcpy(c1.name, "card 1");
	c1.power = 0;
	c1.life = 0;
	c1.price = 43;

	strcpy(c2.name, "card 2");
	c2.power = 0;
	c2.life = 0;
	c2.price = 43;
	
	result = attack(&c1, &c2);

	printf("result=%d\n", result);

return 0;
}
