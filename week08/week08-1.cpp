#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d 是質數", n );
    else printf("%d 不好,不是質數", n);
}
///質數判別
///不能被約分的數字
///只能被1還有n本身可以整除/約分
///暴力法
