#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int size,i,sum=0;
	printf("enter the size");
	scanf("%d",&size);
	p=(int*)calloc(size,sizeof(int));
	if(p=='\0')
	{
		printf("Allocation failed");
		return 0;
	}
	printf("enter your size");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",(p+i));
	}
	i=0;
	int max=*(p+i);
	for(i=1;i<size;i++)
	{
		if(*(p+i)>max);
		max=*(p+i);
	}
	printf("max is %d",max);
	free(p);
	return 0;
}
