#include <bits/stdc++.h>
typedef long long int lld;
using namespace std;

int main()
{
	lld test, i=1;
	scanf("%lld", &test);

	while (test--) {
		lld arr[3];
		for(int i=0; i<3; i++)
			cin >> arr[i];

		sort(arr, arr+3);

		if(arr[2]*arr[2] == arr[0]*arr[0] + arr[1]*arr[1])
			printf("Case %d: yes\n", i);
		else
			printf("Case %d: no\n", i);

		i++;
	}

	return 0;
}
