#include <bits/stdc++.h>
using namespace std;

int p[103], q[103];

int main()
{
    int n, m, cnt=0;
    vector <int> boy, girl;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        boy.push_back(temp);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        int temp;
        cin >> temp;
        girl.push_back(temp);
    }
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());

    for(int i=0; i<boy.size(); i++){
        for(int j=0; j<girl.size(); j++){
            if(boy[i] == girl[j] && q[j] == 0){
                cnt++;
                q[j] = 1;
                break;
            }
            else if(boy[i] == girl[j]+1 && q[j] == 0){
                cnt++;
                q[j] = 1;
                break;
            }
            else if(boy[i]+1 == girl[j] && q[j] == 0){
                cnt++;
                q[j] = 1;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
