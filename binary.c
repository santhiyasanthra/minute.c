#include <stdio.h>
#include<string.h>
void main()
{
char num[89];
int i,count=0,value;
scanf("%s",&num);
value=strlen(num);
for(i=0;num[i]!='\0';i++)
{
	if((num[i]=='1')||(num[i]=='0'))
	{
		count++;
	}
}
	if(value==count)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
getch();
}
