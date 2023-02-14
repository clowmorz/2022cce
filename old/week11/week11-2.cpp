///计逼 程 い丁 程
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    ///ノユ传р传娩,碞オ娩
    if(a>b){  ///a vs b b
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){ ///b vs c C程
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){ ///a vs b abc
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d %d %d",a,b,c);
}
