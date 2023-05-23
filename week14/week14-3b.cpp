#include <stdio.h>
int main()
{
	int  n;
	scanf("%d",&n);
	int price;
	if(n>1500){
		price=100+5*((n-1500)/250);
		if((n-1500)%250!=0)
		price=price+5;
	}
	else price=100;
	printf("%d",price);
}
