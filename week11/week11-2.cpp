///�T�ƱƧ� �̤p ���� �̤j
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    ///�Υ洫��j������k��,�p���N�쥪��
    if(a>b){  ///a vs b b�j
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){ ///b vs c C�̤j
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){ ///a vs b abc��n�F
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d %d %d",a,b,c);
}
