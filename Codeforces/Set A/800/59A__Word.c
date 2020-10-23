#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[100];
    gets(ch);
    int x;
    x = strlen(ch);
    int i, j = 0, k = 0;
    for(i = 0; i < x; i++){
        if(ch[i] >= 65 && ch[i] <= 90)j++;
        if(ch[i] >= 97 && ch[i] <= 122)k++;
    }
    if(j > k){
        for(i = 0; i < x; i++){
            if(j >= k && ch[i] >= 97 && ch[i] <= 122)
                ch[i] = ch[i] - 32;
                ch[x] = NULL;
                printf("%c", ch[i]);
        }puts("");
    }
    else if(j <= k){
        for(i = 0; i < x; i++){
            if(j <= k && ch[i] >= 65 && ch[i] <= 90)
                ch[i] = ch[i] + 32;
                ch[x] = NULL;
                printf("%c", ch[i]);
        }puts("");
    }
    else if(j == 0 || k == 0)printf("%s", ch);
    return 0;
}