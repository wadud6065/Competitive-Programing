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

lld func(lld k) {
    lld result=0, i;
    for(i=1; i*i<k; i++)
        if(k%i == 0)
            result += (i + k/i);
    
    if(i*i == k)
        result += i;
    
    result -= k;
    
    return result;
}

int main()
{
    lld test;
    getI(test);

    while(test--) {
        lld k;
        getI(k);
        pt(func(k));
    }

    return 0;
}