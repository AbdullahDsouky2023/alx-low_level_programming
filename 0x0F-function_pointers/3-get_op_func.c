#include "3-calc.h"
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    while (i < 6)
    {
	    if (ops[i][0] == s)
	    {
		    return ops[i][1](a ,b);
	    }
	   i++;
    }
   retuern (NULL); 

}
