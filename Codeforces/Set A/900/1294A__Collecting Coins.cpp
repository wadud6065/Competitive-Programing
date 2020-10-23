#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n;
    cin >> test;
    for(int i=0; i<test; i++){
        vector <int> vec;
        for(int i=0; i<3; i++){
            int a;
            cin >> a;
            vec.push_back(a);
        }
        cin >> n;
        sort(vec.begin(), vec.end());
        int k = (vec[2]-vec[0]) + (vec[2]-vec[1]);
        int p = n-k;
        if(p < 0)cout << "NO" << endl;
        else if(p == 0)cout << "YES" << endl;
        else if(p%3 == 0)cout << "YES" << endl;
        else if(p%3 != 0)cout << "NO" << endl;
    }
    return 0;
}
