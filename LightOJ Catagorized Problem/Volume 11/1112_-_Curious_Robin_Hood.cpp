#include <iostream>
#include <cstdio>
#define sz 100000
using namespace std;

void build(int BIT[], int pos, int val, int limit)
{
    for(; pos<=limit; pos += pos & (-pos))
        BIT[pos] += val;
}

int query(int BIT[], int limit)
{
    int sum = 0;
    for(; limit > 0; limit -= limit & (-limit))
        sum += BIT[limit];
    return sum;
}

int main()
{
   int T;
   scanf("%d", &T);
   for(int t=0; t<T; t++){
       printf("Case %d:\n", t+1);
       int n, q, k, x, y;
       scanf("%d %d", &n, &q);
       int arr[sz], BIT[sz];

       for(int i=0; i<=n; i++)
          BIT[i] = 0;

       for(int i=0; i<=n; i++)
          arr[i] = 0;

       for(int i=0; i<n; i++)
       {
          int value;
          scanf("%d", &value);
          arr[i] = value;
          build(BIT, i+1, value, n);
       }

       for(int i=0; i<q; i++)
       {
          scanf("%d %d", &k, &x);
          if(k == 1){
             int p = -arr[x];
             printf("%d\n", arr[x]);
             build(BIT, x+1, p, n);
             arr[x] = 0;
          }

          else if(k == 2){
             scanf("%d", &y);
             arr[x] += y;
             build(BIT, x+1, y, n);
          }

          else{
             scanf("%d", &y);
             y++;
             x++;
             printf("%d\n", query(BIT, y) - query(BIT, x-1));
          }
     }
   }
   return 0;
}
/**

1
5 6
3 2 1 4 5
1 4
2 3 4
3 0 3
1 2
3 0 4
1 1

**/
