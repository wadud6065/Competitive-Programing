#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n % 2 == 0) {
		int k = n/2;
		cout << k << endl;
		for(int i=0; i<n/2; i++)
			cout << "2" << " \n"[i == (k-1)];
	}
	else {
		int k = n/2;
		cout << k << endl;
		for(int i=0; i<k-1; i++)
			cout << "2" << " ";
		cout << "3" << endl;	
	}
	return 0;
}