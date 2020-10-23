#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt=0;
    cin >> n >> m;

    if(n >= m)
        cout << n - m << endl;

    else if(n < m){
        int k = m/n;
        if(k == 1){
            for(int i = n-1; i>=1; i--){
                cnt++;
                if(m = i*2){
                    cnt++;
                    break;
                }
            }
            cout << cnt << endl;
        }
        else if(k > 1){
            int k;
            while(1){
                n = n*2;
                k = m/n;
                cnt++;
                if(k == 1)break;
            }
            if(k == 1 && m-n == 0)
                cout << cnt << endl;
            else if(k == 1 && m-n != 0){
                for(int i = n-1; i>=1; i--){
                    cnt++;
                    if(m = i*2){
                        cnt++;
                        break;
                    }
                }
                cout << cnt << endl;
            }
        }
    }
    return 0;
}
