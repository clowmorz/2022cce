///複習:整數變數的宣告 int a;a是整數的形狀
///複習:函式的宣告(講它的形狀)
///int sum(int a,int b);宣告它的形狀
#include <stdio.h>
int sum(int a,int b);///先宣告declare
int main()
{///再用之前,要先宣告declare或定義define
    int ans=sum(2,3);///使用呼叫
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///定義define
{
    return a+b;
}///回傳回覆人家
