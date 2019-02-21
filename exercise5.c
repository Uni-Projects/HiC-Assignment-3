#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	char *s1 = malloc(9);
	if (s1 == NULL)
		 return 1;
	char *s2 = malloc(9);
	if (s2 == NULL)
		 return 1;
	strcpy(s1, "s0123456");
	strcpy(s2, "s0123456");
	// do your attack
	int x = 8;
	while(s1[x] !='s'){

 	       *(s1+x) ='a';
		x++;
	}
	printf("student 1: %s\n",s1);
	//printf("student 2: %s\n", s2);
	return 0;
}
