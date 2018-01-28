#include <stdio.h>

int main(void) {
	int time,temp,rem;
	scanf("%d",&time);
	if(time<60)
	{
	printf("0 %d",time);
	
	}
	else
	
	{
	temp=time/60;
	rem=time%60;
	printf("%d ",temp);
	printf("%d",rem);
	
	
		

	}
	
	
	
	return 0;
}
