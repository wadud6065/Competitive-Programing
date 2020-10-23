#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[1001], b[1001];
    gets(a);
    int cnt=0, k=0, x=strlen(a);
    for(int i=0; i<x; i++)
        if(a[i] >= 'a' && a[i] <= 'z'){
            b[k]=a[i];
            k++;
        }
    b[k] = NULL;
    for(int i=0; i<k; i++)
        for(int j=0; j<k; j++){
            if(i==j)continue;
            if(b[i]==b[j])b[j]=NULL;
        }
    for(int i=0; i<k; i++)
        if(b[i] >= 'a' && b[i] <= 'z')cnt++;
    printf("%d\n", cnt);
    return 0;
}