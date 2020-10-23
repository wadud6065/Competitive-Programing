#include <bits/stdc++.h>
using namespace std;
#define d 256
#define mx 1000005
char txt[mx], pat[mx];
vector<int> occurences;

void rabin_karp(char pat[], char txt[]) {
    int n = strlen(txt), m = strlen(pat);
    int q = 101;
    int p = 0, t = 0;
    int i, j, h = 1;

    for(i=0; i<m-1; i++)
        h = (h * d) % q;

    for(i=0; i<m; i++) {
        p = (p*d + pat[i]) % q;
        t = (t*d + txt[i]) % q;
    }

    for(i=0; i<=n-m; i++) {
        if(p == t) {
            for(j = 0; j<m; j++)
                if(txt[i+j] != pat[j])
                    break;
            if(j == m)
                occurences.push_back(i);
        }

        if(i < n-m){
            t = (d*(t - txt[i]*h) + txt[i+m]) % q;
            if(t < 0)
                t = t + q;
        }
    }
}

int main()
{
    int Case;
    cin >> Case;
    while(Case--) {
        scanf("%s %s", txt, pat);
        rabin_karp(pat, txt);
        if(!occurences.empty()) {
            cout << occurences.size() << endl;
            for(int i=0; i<occurences.size(); i++)
                cout << occurences[i]+1 << " \n"[i == occurences.size()-1];
        } else
            cout << "Not Found" << endl;
        cout << "\n";
        occurences.clear();
    }
    return 0;
}
