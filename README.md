# 2022cce
#week
#06-1畫星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("i:%d星星\n", i);
    }
}
```
#06-2金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}
```
#06-3最大公因數
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a ,&b);
    int ans;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0 ){
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
}
```
#06-4輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a ,&b);
    int ans;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0 ){
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
}
