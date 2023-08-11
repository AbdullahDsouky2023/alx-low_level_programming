#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Description :'function for printing whether the num is + or - or 0'
 *
 * Return : Alawys 0 (Success)
 *
 * */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<0){
	    printf("%d is negative");
	}else if(n>0){
	    printf("%d is positive");
	}else {
	    printf("%d is zero");
	}
	
	
	return (0);
}
