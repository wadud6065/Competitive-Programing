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
#define ALL(c) (c).begin(),(c).end() //handy for function like "sort()"

int main()
{
	lld test;
	getI(test);
	FE(i, 1, test) {
		lld a, b, cnt=0, curA = 0, curB = 0;
		getII(a, b);
		a = a-1;

		if(b % 3 == 0)
			curB = (b/3)*2;

		else if(b % 3 != 0) {
			curB = (b/3)*2;
			if(b % 3 == 2)
				curB++;
		}

		if(a % 3 == 0)
			curA = (a/3)*2;

		else if(a % 3 != 0) {
			curA = (a/3)*2;
			if(a % 3 == 2)
				curA++;
		}
		cnt = curB - curA;

		printf("Case %lld: %lld\n", i, cnt);
	}
	return 0;
}
