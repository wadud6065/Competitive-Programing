#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string str;
    bool cmp = true;
    cin >> n >> t;
    cin >> str;

    for(int i=0; i<t; i++) {
        for(int j=0; j<str.length(); ) {
            if(str[j] == 'B' && str[j+1] == 'G') {
                str[j] = 'G';
                str[j+1] = 'B';
                j = j + 2;
            }
            else {
                j = j + 1;
            }
        }
    }

    cout << str << endl;

    return 0;
}

