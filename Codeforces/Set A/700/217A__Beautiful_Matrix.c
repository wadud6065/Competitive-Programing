#include<stdio.h>
int main()
{
    int i, j;
    int a[100][100];
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    int n, m,k;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(a[i][j] == 1){
                n = i + 1;
                m = j + 1;
            }
        }
    }
    k = abs(n - 3) + abs(m - 3);
    printf("%d\n", k);
    return 0;
}