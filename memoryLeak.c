//7.demonstarte memory leak.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(sizeof(int));
	p='\0';
	return 0;
}
