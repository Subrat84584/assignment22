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
	for(i=0;i<size;i++)
	{
		sum=sum+*(p+i);
	}
	printf("avg of %d",sum/size);
	free(p);
	return 0;
}
