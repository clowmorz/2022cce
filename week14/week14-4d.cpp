#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N==1|| N==3||N==5||N==7||N==8||N==10||N==12)printf("31");
	else if(N==4||N==6||N==9||N==11)printf("30");
	else printf("28");
}
