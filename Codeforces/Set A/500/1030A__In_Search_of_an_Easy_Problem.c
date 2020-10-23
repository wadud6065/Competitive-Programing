#include<stdio.h>
#include<string.h>
int main()
{
    int a, b, i, count=0, count1=1;
    scanf("%d", &a);
    char ch[200];
    for(i = 0; i<a*2; i++){
        scanf("%c", &ch[i]);
    }
    b = strlen(ch);
    for(i = 0; i<b; i++){
        if(ch[i] == '0')count++;
        else if(ch[i] == '1')count1++;
    }
    if(count == a)printf("EASY\n");
    else if(count1 == a)printf("HARD\n");
    else printf("HARD\n");
    return 0;
}