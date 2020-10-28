#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld", &a)
#define getII(a,b) scanf("%lld %lld", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
#define pt(a) printf("%lld", a)
#define ln printf("\n")
#define F(i,L,R) for (int i = L; i < R; i++)
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FF(i,L,R) for (int i = L; i > R; i--)
#define FFE(i,L,R) for (int i = L; i >= R; i--)

int main()
{
	lld test, i=1;
	getI(test);
	while (test--) {
		lld temp;
		getI(temp);
		printf("Case %d: ", i);
		if(temp % 2 != 0)
			printf("Impossible\n");
		else {
			lld even, odd;
			odd = temp / 2;
			even = 2;
			while(odd % 2 == 0) {
				odd = odd / 2;
				even = even * 2;
			}
			printf("%lld %lld\n", odd, even);
		}
		i++;
	}
	return 0;
}
