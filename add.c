#include <stdio.h>

int main(void) 
{
	int n,m,add;
	scanf("%d",&n);
	scanf("%d",&m);
	add=n+m;
	if(add%2==0)
	{
		printf("even");
		
	}
	else
	{
		printf("odd");
	}
	return 0;
}
