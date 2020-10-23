#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    if(a >= 5)b = a/5;
    if(a%5 == 0 && a>=5)printf("%d\n", b);
    else if(a%5 != 0 && a>=5)printf("%d\n", b+1);
    if(a < 5)printf("1\n");
    return 0;
}