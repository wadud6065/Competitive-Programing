#include <bits/stdc++.h>
using namespace std;
#define mx 5005
int arr[mx];

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    vector <int> one, two, three;

    for(int i=0; i<n; i++) {
        if(arr[i] == 1)
            one.push_back(i+1);
        else if(arr[i] == 2)
            two.push_back(i+1);
        else if(arr[i] == 3)
            three.push_back(i+1);
    }
    int temp = min(one.size(), min(two.size(), three.size()));
    cout << temp << endl;

    if(temp != 0)
        for(int i=0; i<temp; i++)
            cout << one[i] <<" "<< two[i] << " " << three[i] << endl;

    return 0;
}