#include<stdio.h>
int main()
{
    unsigned long long int a;
    int b;
    scanf("%llu %d", &a, &b);
    int i;
    for(i = 0; i < b; i++){
        if(a % 10 == 0)
            a = a / 10;
        else a = a - 1;
    }
    printf("%llu\n", a);
    return 0;
}