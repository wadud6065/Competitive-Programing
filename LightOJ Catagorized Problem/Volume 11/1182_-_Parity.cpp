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
		lld a, cnt = 0;
		getI(a);
		while(a != 0) {
			if(a % 2 != 0)
				cnt++;
			a = a/2;
		}
		if(cnt % 2 == 0)
			printf("Case %lld: even\n", i);
		else
			printf("Case %lld: odd\n", i);
	}
	return 0;
}
