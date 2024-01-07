#include <stdlib.h>
#include <stdio.h>
#include "platform.h"


uint32 (*(*ptr (void))[4])(void);
uint32 Return_fun1 (void);
uint32 Return_fun2 (void);
uint32 Return_fun3 (void);
uint32 Return_fun4 (void);
uint32 (*(*my_fun (void))[4])(void);




uint32 (*ptrReturn_fun[4]) (void) = {Return_fun1, Return_fun2,
					Return_fun3,Return_fun4};
typedef uint32 (*fun_pr) (void);
typedef fun_pr (*ptrArrPF)[4];
//fun_pr pr;

//fun_pr ptrRetuen_fun [4] = {Return_fun1, Return_fun2,
  //                                      Return_fun3,Return_fun4};

int main()
{
	
	uint32 (*(*local_main_ptr)[4])(void) = my_fun();
	
//	ptrArrPF = local_main_ptr = my_fun();


	printf("%i \n ", (*local_main_ptr)[0] ());
	printf("%i \n ", (*local_main_ptr)[1] ());
	printf("%i \n ", (*local_main_ptr)[2] ());
	printf("%i \n ", (*local_main_ptr)[3] ());
	
	printf("===============================\n");

	printf("%i \n", (*ptrReturn_fun[0]) () );
	printf("%i \n", (*ptrReturn_fun[1]) () );
        printf("%i \n", (*ptrReturn_fun[2]) () );
        printf("%i \n", (*ptrReturn_fun[3]) () );

	
	return (0);

}

uint32 Return_fun1 (void)
{
return (11);
}

uint32 Return_fun2 (void)
{
return (22);
}


uint32 Return_fun3 (void)
{
return (33);
}


uint32 Return_fun4 (void)
{
return (44);
}

uint32 (*(*my_fun (void))[4])(void){

return (&ptrReturn_fun);

}


/* uint32 (*(*my_fun (void))[4])(void){
	
   	ptrArrPF local_ptr = &ptrReturn_fun;
//	uint32 (*(*local_ptr)[4])(void) = &ptrReturn_fun;
return (local_ptr);

} */
