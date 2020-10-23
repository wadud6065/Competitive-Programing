#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int a;
	cin >> a;
    string str = to_string(a);
    int temp = str.size();
    int cnt = 0;
    for(int i=0; i<temp; i++)
        if(str[i] == '4' || str[i] == '7')
            cnt++;

    if(cnt == 4 || cnt == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
	return 0;
}