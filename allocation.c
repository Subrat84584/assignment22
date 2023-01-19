//9.allocation failed
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int size;
	printf("enter the size");
	scanf("%d",&size);
	p=(int*)calloc(size,sizeof(int));
	if(p=='\0')
	{
		printf("Allocation failed");
		return 0;
	}
	free(p);
}
