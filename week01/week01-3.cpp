#include <stdio.h>
int main()
{
    char c;
    char line[30];
    printf("請輸入一個字串,不要太長: ");
    scanf("%s",line ); ///讀入整個字串,沒有 &會以空格斷字
    printf("你輸入: %s",line);
}
