#include <stdio.h>
#include <stdlib.h>

typedef union{
	struct{
		unsigned char pin0 : 1;
		unsigned char pin1 : 1;
		unsigned char pin2 : 1;
		unsigned char pin3 : 1;
		unsigned char pin4 : 1;
		unsigned char pin5 : 1;
		unsigned char pin6 : 1;
		unsigned char pin7 : 1;
	};

	unsigned char Allport;

}port_reg_t;

int main()
{
	port_reg_t reg1;

	printf("Size Of Obj :%i\n", sizeof(reg1));
	reg1.Allport = 0x55;

	printf("%i\n", reg1.pin0);
	printf("%i\n", reg1.pin1);
	printf("%i\n", reg1.pin2);
	printf("%i\n", reg1.pin3);
	printf("%i\n", reg1.pin4);
	printf("%i\n", reg1.pin5);
	printf("%i\n", reg1.pin6);
	printf("%i\n", reg1.pin7);


	return (0);
}
