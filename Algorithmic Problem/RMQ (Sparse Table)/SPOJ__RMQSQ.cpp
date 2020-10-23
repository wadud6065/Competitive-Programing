#include <bits/stdc++.h>
using namespace std;

int n, q;
int arr[100005], st[100005][24];

void preprocesing()
{
	for(int i=0; i<n; i++)
		st[i][0] = arr[i];

	int k = log2(n);

	for(int j=1; j<=k; j++)
		for(int i=0; i+(1<<j) <= n; i++)
			st[i][j] = min( st[i][j-1], st[i + (1 << (j-1))][j-1] );
}

int main()
{
	int L, R;
	cin >> n;

	for(int i=0; i<n; i++)
		cin >> arr[i];

	preprocesing();

	cin >> q;

	for(int i=0; i<q; i++) {
		cin >> L >> R;
		int j = log2(R - L + 1);
		int result = min(st[L][j], st[R - (1<<j) + 1][j]);
		cout << result << endl;
	}
}