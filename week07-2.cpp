///程そ计,эノlong long int
///scanf("%lld", &a);弄
///printf("%lld",a)
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b); ///糶lld

    long long int ans;
    for(long long int i = 1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("程そ计琌:%lld\n", ans);
}
