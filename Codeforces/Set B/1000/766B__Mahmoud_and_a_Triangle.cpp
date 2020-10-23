#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    scanf("%d", &k);
    int arr[k+2];
    for(int i=0; i<k; i++)
        scanf("%d", &arr[i]);

    bool temp = true;

    sort(arr, arr+k);
    for(int i=0; i<k-2; i++) {
        if(arr[i]+arr[i+1] > arr[i+2]) {
            printf("YES\n");
            temp = false;
            break;
        }
    }
    if(temp == true) {
        printf("NO\n");
    }
    return 0;
}