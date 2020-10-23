#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    scanf("%s", &ch);
    int i, a=strlen(ch), count=0;
 
    for(i=0; i<a; i++)
        if(ch[i] == 'a')count++;
 
    if(count > a/2)printf("%d\n", a);
    else if(count == a/2)printf("%d\n", count*2 -1);
    else if(count < a/2)printf("%d\n", count*2 -1);
    return 0;
}