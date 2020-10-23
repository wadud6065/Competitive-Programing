#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n >= 0)
        cout << n << endl;
    else {
        n = n*(-1);
        string str = to_string(n);
        int size = str.size();
        if(size == 1 || (size == 2 && str[1] == '0') )
            cout << "0" << endl;
        else {
            cout << '-';
            for(int i=0; i<size-2; i++)
                cout << str[i];
            if(str[size-1] > str[size-2])
                cout << str[size-2];
            else
                cout << str[size-1];

            cout << "\n";
        }
    }
    return 0;
}