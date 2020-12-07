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

lld func(lld a, lld b) {
    lld cnt=0;
    lld k = __gcd(a, b);
    for(lld i=1; i*i<=k; i++)
        if(k%i == 0 && i*i != k)
            cnt = cnt + 2;
        else if(k%i == 0 && i*i == k)
            cnt++;
    return cnt;
}

int main()
{
    lld test;
    getI(test);
    while(test--) {
        lld a, b;
        getII(a, b);
        pt(func(a, b));
    }

    return 0;
}