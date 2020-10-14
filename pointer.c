#include<stdio.h>


int main() 
{
	int *p;
	int a, b;
	a = 0;
	b = 1;

	//corrected Donovan Griego 10/01/2020
	p = &a;
	//printf("%d\n", p); 

	printf("%d\n", *p); 

	//corrected Donovan Griego 10/01/2020
	b = *(p + 1);
	//b = &p;
	
	printf("%d\n", b); 

 	return 0;
}
