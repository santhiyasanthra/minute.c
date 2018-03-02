#include <stdio.h>
#include<conio.h>
void main()
{
	char name[90];
	int i,n;
	scanf("%s",&name);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",name[i]);
	}
getch();
}
