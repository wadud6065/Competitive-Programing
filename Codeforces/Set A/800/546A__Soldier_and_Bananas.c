#include<stdio.h>
int main()
{
    long long int n, p, o, j, k, w;
    scanf("%lld %lld %lld", &k, &n, &w);
    int i;
    j = 0;
    for(i = 1; i <= w; i++){
        j = j + i*k;
    }
    o = j - n;
    if(o <= 0)printf("0\n");
    else printf("%lld\n", o);
    return 0;
}