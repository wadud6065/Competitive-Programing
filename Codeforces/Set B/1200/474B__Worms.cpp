#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    scanf("%d", &k);
    int arr1[k+1], arr2[k+1];

    for(int i=0; i<k; i++)
        scanf("%d", &arr1[i]);

    arr2[0] = arr1[0];

    for(int i=1; i<k; i++)
        arr2[i] = arr1[i]+arr2[i-1];

    vector<int> vec(arr2, arr2+k);

    int p;
    vector<int>:: iterator lower;
    scanf("%d", &p);
    while (p--) {
        int temp;
        scanf("%d", &temp);
        lower = lower_bound(vec.begin(), vec.end(), temp);
        cout << lower-vec.begin()+1 << endl;
    }
    return 0;
}