#include<bits/stdc++.h>
using namespace std;

double BS(double ab, double ac, double bc, double ratio);
double func(double ab, double ac, double bc, double ad);

int main()
{
   int T, i=1;
   cin >> T;
   while(T--){
      double ab, ac, bc, ratio;
      cin >> ab >> ac >> bc >> ratio;
      double ans = BS(ab, ac, bc, ratio);
      printf("Case %d: %0.7lf\n", i, ans);
      i++;
   }
   return 0;
}

double BS(double ab, double ac, double bc, double ratio)
{
   double high, low, mid, ad;
   low = 0.0;
   high = ab;

   for(int i=0; i<100; i++){

      mid = (low + high)/2.0;
      ad = mid;

      if(func(ab, ac, bc, ad) > ratio)
         high = mid;

      else
         low = mid;
   }
   return ad;
}

double func(double ab, double ac, double bc, double ad)
{
   double Area_Of_Large_Traingle, Area_Of_Small_Traingle, S1, S2, Area_Of_Trapezeam;

   double ae = (ad*ac)/ab, de = (ad*bc)/ab;

   S1 = (ab + bc + ac)/2;
   S2 = (ad + ae + de)/2;

   Area_Of_Large_Traingle = sqrt(S1*(S1-ab)*(S1-ac)*(S1-bc));
   Area_Of_Small_Traingle = sqrt(S2*(S2-ad)*(S2-ae)*(S2-de));

   Area_Of_Trapezeam = Area_Of_Large_Traingle - Area_Of_Small_Traingle;

   double ratio = Area_Of_Small_Traingle/Area_Of_Trapezeam;

   return ratio;
}
