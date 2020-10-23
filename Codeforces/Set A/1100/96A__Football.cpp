#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    cin >> str1;
    string str2 ("1111111");
    string str3 ("0000000");

    if(str1.find(str2) != string::npos)
        cout << "YES\n";
    else if(str1.find(str3) != string::npos)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}
