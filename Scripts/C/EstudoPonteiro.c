#include <stdio.h>
#include <stdlib.h>


void print(char *q[5]);

int main(int argc, char **argv)
{
	int *p = malloc(sizeof(int)*40);
	
	
	print(p);
		
	return 0;
}
