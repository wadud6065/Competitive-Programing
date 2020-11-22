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

int main()
{
	lld test, n, p, q, result;
	cin >> test;

	while(test--) {
		
		cin >> n;
		p = n*(n+1);
		q = ((n-1)*n)/2;
		result = p+q;

		pt(result);
	}
	return 0;
}