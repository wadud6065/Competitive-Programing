#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int arr[4];


	int k;
	k = n/m;
	arr[0] = k*b + (n % m)*a;
	arr[1] = n*a;
	arr[2] = k*b + b;
  if(n < m)arr[3] = b;
  else arr[3] = INT_MAX;

	sort(arr, arr+3);

	cout << arr[0] << endl;

	return 0;
}
