#include <stdio.h>
int main()
{
    int a[4]; ///宣告有四格 a[0] a[1] a[2] a[3]
    printf("a[0]: %d\n",a[0]); ///把a[0]拿來用,亂碼

    a[0] = 33;
    printf("a[0]: %d\n",a[0]); ///把a[0]拿來用
}
