#include<stdio.h>

int main(void)
{
int b[6],i,n;
scanf("%d",&n);

for(i=1;i<=n;i++)
{
scanf("%d",&b[i]);
}
for(i=1;i<=n;i++)
{
printf(" %d %d\n",i,b[i]);
}
return 0;
}
