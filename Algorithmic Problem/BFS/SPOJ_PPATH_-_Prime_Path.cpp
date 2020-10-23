#include <bits/stdc++.h>
using namespace std;

bool is_prime[10005];
vector<int>adj[10007];
vector<int>prime;
int vis[10005];

void store_prime() {
    memset(is_prime, true, sizeof(is_prime));

    for (int p=2; p*p<=10003; p++){
        if (is_prime[p] == true) {
            for (int i=p*p; i<=10003; i += p)
                is_prime[i] = false;
        }
    }

    for(int i=1000; i<=10000; i++)
        if(is_prime[i] == 1)
            prime.push_back(i);
}

bool connection(int a, int b) {
    if(is_prime[a] == false && is_prime[b] == false)
        return false;

    string str1 = to_string(a);
    string str2 = to_string(b);

    if(str1[0] != str2[0] && str1[1] == str2[1] && str1[2] == str2[2] && str1[3] == str2[3])
        return true;

    if(str1[0] == str2[0] && str1[1] != str2[1] && str1[2] == str2[2] && str1[3] == str2[3])
        return true;

    if(str1[0] == str2[0] && str1[1] == str2[1] && str1[2] != str2[2] && str1[3] == str2[3])
        return true;

    if(str1[0] == str2[0] && str1[1] == str2[1] && str1[2] == str2[2] && str1[3] != str2[3])
        return true;

    else
        return false;
}

void building_graph() {
    int n = prime.size();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(connection(prime[i], prime[j])) {
                adj[ prime[i] ].push_back(prime[j]);
                adj[ prime[j] ].push_back(prime[i]);
            }
        }
    }
}

int bfs(int source, int dest) {
    queue< pair<int,int> >q;
    int x, cost;
    q.push({source,0});
    vis[source] = 1;
    while(!q.empty()) {
        x = q.front().first;
        cost = q.front().second;
        q.pop();

        if(x==dest)
            return cost;

        for (int i = 0; i<adj[x].size(); i++)
            if(!vis[ adj[x][i] ]) {
                q.push({adj[x][i],cost+1});
                vis[ adj[x][i] ] = 1;
            }
    }
    return -1;
}

int main()
{
    int n;
    store_prime();
    building_graph();

    cin >> n;

    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        cout << bfs(a, b) << endl;
        memset(vis, 0, sizeof(vis));
    }
    return 0 ;
}