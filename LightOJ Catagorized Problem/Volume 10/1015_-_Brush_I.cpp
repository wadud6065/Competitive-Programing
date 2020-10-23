#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	int i = 1;
	while (test--) {
		int a, k=0;
		cin >> a;
		for(int i=0; i<a; i++) {
			int temp;
			cin >> temp;
			if(temp < 0)
				temp = 0;

			k += temp;
		}
		cout << "Case " << i << ": " << k << "\n";
		i++;
	}
	return 0;
}
