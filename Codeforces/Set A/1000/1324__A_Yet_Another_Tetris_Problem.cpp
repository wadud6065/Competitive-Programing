#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, cnt;
    vector <int> vec;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
        cnt = 0;
        for(int i=0; i<n; i++) {
            int temp = vec[i] - vec[0];
            if(temp % 2 == 0)
                cnt++;
        }
        if(cnt == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        vec.clear();
    }
    return 0;
}