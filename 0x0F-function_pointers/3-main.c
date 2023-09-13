#include "3-calc.h"
#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int a,b;
	char *s;
	int (*fun)(int, int) ;
	int result;
	if (argc == 4 )
	{
		a = atoi(argv[1]);
		b =atoi(argv[3]);
		s=argv[2];
		fun =get_op_func(s);
		result =fun(a,b);
		printf("%d\n", result);
	}
	if (argc != 4){
		printf("Error\n");
		exit(98);
	}
	return 0;
}
