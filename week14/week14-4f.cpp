#include <stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if(x>='A'&&x<='Z')printf("U");
	else if(x>='a'&&x<='z')printf("L");
	else if(x>='1'&&x<='9')printf("D");
	else printf("O");
}
