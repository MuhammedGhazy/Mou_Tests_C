#include "main.h"
#include <stdio.h>

void gpio_write_5vol (gpio_t *gpio_obj)
{
	printf(" GPIO Pin Number %i Is (ON)\n", gpio_obj->pin_num);
	gpio_obj->ptr();
}

void gpio_write_0vol (gpio_t *gpio_obj)
{
        printf(" GPIO Pin Number %i Is (OFF)\n", gpio_obj->pin_num);
	gpio_obj->ptr();
}
