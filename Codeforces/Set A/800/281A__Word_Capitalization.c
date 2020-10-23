#include<stdio.h>
int main()
{
    char a[999];
    gets(a);
    if (a[0] >= 97 && a[0] <= 122){
        a[0] = a[0] - 32;
    }
    printf("%s\n", a);
    return 0;
}