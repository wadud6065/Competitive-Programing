#include <bits/stdc++.h>
using namespace std;

double BS(double x,double y,double h);
double solve(double x, double y, double temp);

int main()
{
  int T, i=1;
  cin >> T;
  while(T--){
    double x, y, h;
    cin >> x >> y >> h;
    double ans = BS(x, y, h);
    printf("Case %d: %0.7lf\n", i, ans);
    i++;
  }
}

double BS(double x,double y,double h)
{
  double high, low, mid, temp;
  low = 0.0;
  high = min(x, y);
  for(int i=0; i<100; i++){
    mid = (high+low)/2.0;
    temp = mid;
    if(solve(x, y, temp) < h)
      high = mid;
    else
      low = mid;
  }
  return mid;
}

double solve(double x, double y, double temp)
{
  double h1, h2, h;
  h1 = sqrt((y*y) - (temp*temp));
  h2 = sqrt((x*x) - (temp*temp));
  h = (h1*h2)/(h1+h2);
  return h;
}
