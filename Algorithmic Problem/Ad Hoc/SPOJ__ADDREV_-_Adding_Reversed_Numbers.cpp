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

lld reverse(lld n) {
    lld rev=0, remain;

    while(n != 0) {
        remain = n % 10;
        rev = rev * 10 + remain;
        n = n/10;
    }
    return rev;
}

int main()
{
    lld test;
    getI(test);
    
    while(test--) {
        lld num1, num2, reverse_num1, reverse_num2, result, reverse_result;
        getII(num1, num2);

        reverse_num1 = reverse(num1);
        reverse_num2 = reverse(num2);

        result = reverse_num1 + reverse_num2;

        reverse_result = reverse(result);

        pt(reverse_result);
    }

    return 0;
}