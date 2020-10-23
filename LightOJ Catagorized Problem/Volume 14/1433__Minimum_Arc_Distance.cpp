#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        int Ox, Oy, Ax, Ay, Bx, By;
        cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;
        double OA = sqrt(pow(Ox-Ax,2)+pow(Oy-Ay,2));
        double OB = OA;
        double AB = sqrt(pow(Ax-Bx,2)+pow(Ay-By,2));
        double rad = acos(((OA*OA)+(OA*OA)-(AB*AB))/(2*OA*OA));
        double ans = OA*rad;
        printf("Case %d: %0.8lf\n",i+1,ans);
    }
    return 0;
}