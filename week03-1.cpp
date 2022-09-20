#include <stdio.h>
int main()
{
    int a, b;
    printf("請輸入兩個數:");
    scanf("%d%d", &a, &b);
    printf("%d + %d是%d\n", a, b, a+b);
    printf("%d - %d是%d\n", a, b, a-b);
    printf("%d * %d是%d\n", a, b, a*b);
    printf("%d / %d是%d\n", a, b, a/b);
    printf("%d 除法 %d 的餘數是%d\n", a, b, a%b);
}
