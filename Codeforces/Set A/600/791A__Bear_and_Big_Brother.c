#include<stdio.h>
int main()
{
    int a, b, d, i;
    scanf("%d %d", &a, &b);
    for(i = 0; i < 1000; i++){
        a = a * 3;
        b = b * 2;
        if(a > b){
           d = i + 1;
            break;
        }
    }
    printf("%d\n", d);
    return 0;
}