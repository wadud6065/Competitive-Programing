#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        int n, a, b, c;
        vector <int> vec;
        cin >> n;
        for(int j=2; j<sqrt(n); j++)
            if(n%j == 0){
                a = j;
                b = n/j;
                n = n/j;
                vec.push_back(a);
                break;
            }
        for(int k = 2; k<sqrt(n); k++)
            if(n%k == 0 && k!=a && n/k != b){
                vec.push_back(k);
                vec.push_back(n/k);
                break;
            }
        if(vec.size() == 3){
            cout << "YES" << endl;
            for(int j=0; j<3; j++)
                cout << vec[j] << " \n"[j==2];
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
