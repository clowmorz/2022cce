///�Ʋ�:����ܼƪ��ŧi int a;a�O��ƪ��Ϊ�
///�Ʋ�:�禡���ŧi(�������Ϊ�)
///int sum(int a,int b);�ŧi�����Ϊ�
#include <stdio.h>
int sum(int a,int b);///���ŧideclare
int main()
{///�A�Τ��e,�n���ŧideclare�Ωw�qdefine
    int ans=sum(2,3);///�ϥΩI�s
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///�w�qdefine
{
    return a+b;
}///�^�Ǧ^�ФH�a
