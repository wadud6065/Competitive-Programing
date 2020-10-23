#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int k;
	cin >> k;

	string s;
	cin >> s;

	int cnt1 = 0, cnt2 = 0;

	for(int i=0; i<k; i++)
		if(s[i] == 'S' && s[i+1] == 'F')cnt1++;

	for(int i=0; i<k; i++)
		if(s[i] == 'F' && s[i+1] == 'S')cnt2++;

	if(cnt1 > cnt2)cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
