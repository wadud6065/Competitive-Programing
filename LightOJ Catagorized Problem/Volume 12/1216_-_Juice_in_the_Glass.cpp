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
#define ALL(c) (c).begin(),(c).end()
#define PI 3.1415926535897932384626

int main()
{
	lld test;
	getI(test);
	FE(i, 1, test) {
		double r1, r2, h, p, r3, x, vol;
		scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);

		x = (r2*h)/(r1-r2);
		r3 = ((r2*p) + (r2*x)) / x;

		vol = (PI*r3*r3*(p+x))/3 - (PI*r2*r2*x)/3;
		printf("Case %lld: %0.9lf\n", i, vol);
	}
	return 0;
}
