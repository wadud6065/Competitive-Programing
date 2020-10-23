#include<stdio.h>
int main()
{
    int a, count=0;
    char arr[50];
    scanf("%d", &a);
    scanf("%s", arr);
    for(int i=0; i<a; i++)
        if(arr[i]==arr[i+1])count++;
    printf("%d\n", count);
    return 0;
}