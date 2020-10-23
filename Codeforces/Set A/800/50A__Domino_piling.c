#include<stdio.h>
int main()
{
    int M, N, p, i, q, r, s, t;
    scanf("%d %d", &M, &N);
    p = M*N;
    for(i = p; i >= 0; i--){
        if(i % 2 == 0)break;
    }
    q = i / 2;
    r = (M*N) - i;
    s = r / 2;
    t = s + q;
    printf("%d\n", t);
    return 0;
}