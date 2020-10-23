#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1)printf("I hate it\n");
    else{
         int i;
    for(i = 1; i < n; i++){
        if(i == 1)printf("I hate ");
        else if(i % 2 == 1)printf("that I hate ");
        else if(i % 2 == 0)printf("that I love ");
    }
    if(n % 2 == 1)printf("that I hate it");
    if(n % 2 == 0)printf("that I love it");
    puts("");
    }
    return 0;
}