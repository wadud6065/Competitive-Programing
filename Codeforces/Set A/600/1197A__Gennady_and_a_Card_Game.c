#include<stdio.h>
int main()
{
    char a[2];
    scanf("%s", &a);
    char b[2], c[2], d[2], e[2], f[2];
    scanf("%s %s %s %s %s", &b, &c, &d, &e, &f);
    if(a[0]==b[0] || a[0]==c[0] || a[0]==d[0] || a[0]==e[0] || a[0]==f[0])
        printf("YES\n");
    else if(a[1]==b[1] || a[1]==c[1] || a[1]==d[1] || a[1]==e[1] || a[1]==f[1])
        printf("YES\n");
    else printf("NO\n");
    return 0;
}