#include "main.h"



unsigned char sq (unsigned int *pr, unsigned int *pr2, unsigned int *pr3)
{
 unsigned char er = 0;

 er = square(pr);
 er |= square(pr2);
 er |= square(pr3);

 return (er);

}

