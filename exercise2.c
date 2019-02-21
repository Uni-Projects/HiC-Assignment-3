#include <stdlib.h>
#include <stdio.h>

int main (void)
{
        unsigned long long int x = 1;
        char* a = calloc(1,sizeof(char));

	do
	{
		free(a);
		a = calloc(x, sizeof(char));
		x = x + 500;
	} while( a != NULL);
	
	printf("Calloc can allocate at most %llu bytes\n",x);

	return 0;
}
