#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld", &a)
#define getII(a,b) scanf("%lld %lld", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
#define pt(a) printf("%lld", a)
#define ln printf("\n")
#define F(i,L,R) for (lld i = L; i < R; i++)
#define FE(i,L,R) for (lld i = L; i <= R; i++)

int main()
{
	lld test;
	getI(test);
	FE(i, 1, test) {
		lld a, b, cnt=0;
		getII(a, b);
		FE(j, a, b) {
			if( ((j*(j+1))/2) % 3 == 0 )
			 	cnt++;
		}
		printf("Case %lld: %lld\n", i, cnt);
	}
	return 0;
}
