#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,size,i,sum=0;
	printf("enter size of array");
	p=(int*)malloc(size*sizeof(int));
	if(p=='\0')
	{
	  printf("Allocation failed");
	  return 0;
	}
	printf("enter size");
	scanf("%d",&size);
	printf("enter the array element");
	for(i=0;i<size;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<size;i++)
	{
		sum=sum+*(p+i);
	}
	printf("sum is :%d",sum);
	free(p);
	return 0;
    	
}
