#include <stdio.h>
#include <stdlib.h>

extern void magic_function();

void prep_stack(){

	char a[400000];
	for(int i = 0 ; i < 400000; i++)
	{
		if(i % 2 == 0)
			a[i]= 'f';
		else 
			a[i]= 'k';
	}

}

void init_arr(){

	unsigned long i,counter;
	counter = 0;
	char b[400000];
        for(i = 0 ; i < 400000;i++ )
	{
		printf("%c",b[i]);
		if(b[i] != 'f' && b[i] != 'k')
			counter++;
	}
	printf("is %lu",counter);
}

int main(void)
{	
	
	prep_stack();
	magic_function();
	init_arr();
	return 0;
}
