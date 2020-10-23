#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        int n, a, b;
        bool bl = true;
        vector <char> vec_ch;
        vector < pair <int, int> > vec;
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> a >> b;
            vec.push_back( make_pair(a, b) );
        }
        sort(vec.begin(), vec.end());
        int q = vec[0].first, L = vec[0].second;
        for(int m=0; m<q; m++){
                char ch = 'R';
                vec_ch.push_back(ch);
            }
        for(int m=0; m<L; m++){
                char ch = 'U';
                vec_ch.push_back(ch);
            }
        for(int k=1; k<n; k++){
            q = vec[k].first - vec[k-1].first;
            for(int m=0; m<q; m++){
                char ch = 'R';
                vec_ch.push_back(ch);
            }
            L = vec[k].second - vec[k-1].second;
            if(L < 0){
                bl = false;
                break;
            }
            for(int m=0; m<L; m++){
                char ch = 'U';
                vec_ch.push_back(ch);
            }
        }
        if(bl == true){
            cout << "YES" << endl;
            for(int mn=0; mn<vec_ch.size(); mn++)
                cout << vec_ch[mn];
            cout << "\n";
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
