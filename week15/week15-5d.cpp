#include <stdio.h>
int main()
{
	int a[50],i=1;
	scanf("%d",&a[0]);
	int max=a[0],min=a[0];
	while(scanf("%d",&a[i])==1)
	{
	if(a[i]==0)break;
	if(max<a[i])max=a[i];
	if(min>a[i])min=a[i];
	}
	printf("[%d,%d]",min,max);
}
