#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
    char ch[100];
    gets(ch);
    int j, count = 0;
    for(j = 0; j < 100; j++){
        if(ch[j] == NULL)break;
        count++;
    }
    if(count <= 10)printf("%s\n", ch);
    else printf("%c%d%c\n", ch[0], count - 2, ch[count - 1]);
    }
    return 0;
}