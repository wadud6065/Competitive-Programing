#include<stdio.h>
int main()
{
    unsigned long long int n;
    scanf("%llu", &n);

    if(n % 2 == 0)printf("Mahmoud\n");
    else if (n % 2 != 0)printf("Ehab\n");
    
    return 0;
}