#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld", &a)
#define getII(a,b) scanf("%lld %lld", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
#define pt(a) printf("%lld\n", a)
#define ln printf("\n")
#define F(i,L,R) for (lld i = L; i < R; i++)
#define FE(i,L,R) for (lld i = L; i <= R; i++)
#define FR(i,L,R) for (lld i = L; i > R; i--)
#define FRE(i,L,R) for (lld i = L; i >= R; i--)
#define ALL(c) (c).begin(),(c).end()
#define PI 3.1415926535897932384626
#define pb push_back

lld func(lld temp) {
    vector <lld> vec;
    
    while(temp != 0) {
        lld x = temp % 2;
        vec.pb(x);
        temp = temp / 2;
    }

    lld result=0, q = vec.size()-1;
    
    for (lld i = 0; i < vec.size(); i++) {
        lld y = vec[i]*round(pow(2, q));
        result += y;
        q--;
    }

    return result;
}

int main()
{
    lld test;
    getI(test);

    while(test--) {
        lld k;
        getI(k);

        if(k % 2 != 0)
            pt(k);
    
        else {
            lld p = func(k);
            pt(p);
        }
    }
    
    return 0;
}