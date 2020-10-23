#include<stdio.h>
int main()
{
    int n, i, j;
    int a[1000][1000];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    int k, l;
    for(l = 0, i = 0; i < n; i++){
        for(k = 0, j = 0; j < 3; j++){
            if(a[i][j] == 1)k++;
        }if(k >= 2)l++;
    }
    printf("%d\n", l);
    return 0;
}