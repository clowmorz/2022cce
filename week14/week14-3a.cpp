#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=n/50;
	int b=(n%50)/10;
	int c=(n%50%10)/5;
	int d=(n%50%10%5)/1;
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,a,b,c,d);

}
