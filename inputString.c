#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char *inputstring();
char *inputstring()
{
	char *p,*q,ch;
	int len=1,i;
	p=(char*)malloc(len);
	ch=getche();
	*p=ch;
	do{
		q=(char*)malloc(len+1);
		for(i=0;i<len;i++)
		     *(q+i)=*(p+i);
		     *(q+i)='\0';
		     free(p);
		     len++;
		     p=(char*)malloc(len);
		     for(i=0;i<len;i++)
		     *(p+i)=*(q+i);
		     free(q);
		     ch=getche();
		     *(p+len-1)=ch;
		     
	}while(ch!=13);    \\ascii code of enter :13
	q=(char*)malloc(len);
	for(i=0;i<len;i++)
	*(q+i)=*(p+i);
	*(q+i-1)='\0';
	return (q);
	
}
int main()
{
	char *str;
	str=inputstring();
	printf("you have entered:%s",str);
	getch;
}
