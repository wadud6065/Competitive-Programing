#include<stdio.h>
int main()
{
    int f;
    scanf("%d", &f);
    int i;
    char p[20];
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for(i = 0; i < f; i++){
        scanf("%s", p);
        if(p[0] == 'T')a++;
        if(p[0] == 'C')b++;
        if(p[0] == 'O')c++;
        if(p[0] == 'D')d++;
        if(p[0] == 'I')e++;
    }
    int k;
    k = a*4 + b*6 + c*8 + d*12 + e*20;
    printf("%d\n", k);
    return 0;
}