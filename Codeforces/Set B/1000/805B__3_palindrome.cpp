#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    str = "bbaabbaabbaa";

    for(int i=0; i<=25000; i++)
        str.append("bbaabbaabbaa");

    for(int i=0; i<n; i++)
        cout << str[i];

    cout << "\n";
    return 0;
}