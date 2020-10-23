#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> vec;

    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());
    int cnt = 0;

    for(int i=1; i<n; i++) {
        if(vec[i-1] == vec[i]) {
            vec[i] = vec[i]+1;
            cnt++;
        }
        else if(vec[i] < vec[i-1]) {
            int k = vec[i-1] - vec[i];
            cnt = cnt+k;
            vec[i] = vec[i] + k + 1;
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}