#include <stdio.h>
#include<math.h>

int main(void) {
	int a,d,tn,n,i,sum=0;
	scanf("%d",&a);
	printf("%d",a);
	scanf("%d",&d);
	printf("%d",d);
	scanf("%d",&n);
	printf("%d",n);
	sum=n*(2*a+(n-1)d)/2;
	
	tn=a+(n-1)d;
	for(i=a;i<=tn);i=i+d)
	{
		if(i!=tn)
		{
			printf("%d+",i);
		}
		else
		{
			printf("%d=%d",i,sum);
		}
		}
	}
	return 0;
}
