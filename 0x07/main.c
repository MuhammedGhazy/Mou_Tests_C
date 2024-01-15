#include <stdio.h>
#include <stdlib.h>
#include "main.h"

gpio_t gpio_1;

void gpio_notifiction (void);

int main()
{
	gpio_1.pin_num = 11;
	gpio_1.ptr = gpio_notifiction;

	gpio_write_5vol(&gpio_1);
	gpio_write_0vol(&gpio_1);


	return (0);
}

void gpio_notifiction (void)
{
	printf("GPIO performed request \n");
}
