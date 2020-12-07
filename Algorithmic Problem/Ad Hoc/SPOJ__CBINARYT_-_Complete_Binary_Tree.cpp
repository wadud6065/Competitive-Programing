#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld", &a)
#define getII(a,b) scanf("%lld %lld", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
#define pt(a) printf("%lld\n", a)
#define ln printf("\n")
#define ALL(c) (c).begin(),(c).end()
#define PI 3.1415926535897932384626
#define pb push_back

lld arr[60];

int main()
{
    lld test;
    getI(test);
    
    arr[0] = 1;

    for (lld i = 1; i <= 55; i++)
        arr[i] = (arr[i-1]*2) + 1;

    for (lld i = 0; i < test; i++) {
        lld n;
        getI(n);
        printf("Case %lld: %lld\n", i+1, arr[n]);
    }
    
    return 0;
}