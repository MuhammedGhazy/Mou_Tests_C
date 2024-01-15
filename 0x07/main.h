#ifndef MAIN_H
#define MAIN_H

typedef struct {
	unsigned int pin_num;
	void (*ptr) (void);

}gpio_t;

void gpio_write_5vol (gpio_t *gpio_obj);
void gpio_write_0vol (gpio_t *gpio_obj);


#endif
