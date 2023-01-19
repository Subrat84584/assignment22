#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str,c;
	int i=0,j=1;
	str=(char*)malloc(sizeof(int));
	printf("enter the string");
	while(c!='\n')
	{
		c=getc(stdin);  //getc :get character form keyboard
		j++;
		str=(char*)realloc(str,j*sizeof(char));
		str[i]=c;
		i++;
	}
	str[i]='\0';
	printf("you have entered:%s",str);
	free(str);
	return 0;
}
