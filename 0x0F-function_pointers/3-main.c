#include "calc.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b;
	char *s;
	if (argc == 4 )
	{
		a = atoi(argv[1]);
		b =atoi(argv[2]);
		s=argv[3];
		return get_op_func(s)(a, b);
	}	
	return 0;
}
