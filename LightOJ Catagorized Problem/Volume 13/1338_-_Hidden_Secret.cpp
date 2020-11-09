#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld\n", &a)
#define getII(a,b) scanf("%lld %lld\n", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld\n", &a, &b, &c)
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
	lld test;
	getI(test);
	
	FE(j, 1, test) {
		string str1, str2;

		getline(cin, str1);
		F(i, 0, str1.size()) {
			if(str1[i] >= 65 && str1[i] <= 90)
				str1[i] = str1[i] + 32;
		}

		getline(cin, str2);
		F(i, 0, str2.size()) {
			if(str2[i] >= 65 && str2[i] <= 90)
				str2[i] = str2[i] + 32;
		}

		int arr1[28], arr2[28];
		memset(arr1, 0, sizeof(arr1));
		memset(arr2, 0, sizeof(arr2));
		F(i, 0, str1.size()) {
			if(str1[i] != ' ') {
				int p = str1[i] - 'a';
				arr1[p]++;
			}
		}

		F(i, 0, str2.size()) {
			if(str2[i] != ' ') {
				int p = str2[i] - 'a';
				arr2[p]++;
			}
		}

		bool temp = true;
		F(i, 0, 28) {
			if(arr1[i] != arr2[i]) {
				temp = false;
				break;
			}
		}

		if(temp)
			printf("Case %lld: Yes\n", j);
		else
			printf("Case %lld: No\n", j);
	}

	return 0;
}
