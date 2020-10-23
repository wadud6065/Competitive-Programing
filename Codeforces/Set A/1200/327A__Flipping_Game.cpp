#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, cnt1=0, cnt2=0;
	cin >> T;

	int arr[T], max=0;

	for(int i=0; i<T; i++)
		cin >> arr[i];

	for(int i=0; i<T; i++)
		arr[i];

	for(int i=0; i<T; i++){
		for(int j=i; j<T; j++){
			if(arr[j] == 0)cnt1++;
			for(int k=0; k<i; k++){
				if(arr[k] == 1)cnt2++;
			}
		}
		if(cnt1+cnt2 > max)max = cnt1+cnt2;
		cnt1=0;
		cnt2=0;
	}

	cout << max << endl;

	return 0;
}
