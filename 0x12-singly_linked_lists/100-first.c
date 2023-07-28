#include<stdio.h>

/**
* myFun - apply the constructor attribute to myFun() so that it
*   is executed before main()
*/
void myFun(void) __attribute__((constructor));

/**
* myFun - implementation of myFun
*/
void myFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
