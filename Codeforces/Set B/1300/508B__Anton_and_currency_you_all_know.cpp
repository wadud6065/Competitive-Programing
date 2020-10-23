#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input1;
    cin >> input1;
    int sz = input1.size();
    int i, index=-1;

    for(i=0; i<=sz-1; i++) {
        int temp = input1[i];
        if( temp % 2 == 0 ) {
            index = i;
            if( input1[i] < input1[sz-1] )
                break;
        }
    }

    if(index == -1)
        cout << "-1" << endl;

    else {
        swap(input1[index], input1[sz-1]);
        cout << input1 << endl;
    }

    return 0;
}