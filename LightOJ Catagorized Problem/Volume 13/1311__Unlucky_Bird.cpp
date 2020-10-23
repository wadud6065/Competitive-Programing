#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        double v1, v2, v3, a1, a2;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        double s1 = (v1*v1)/(2*a1);
        double s2 = (v2*v2)/(2*a2);
        double t1 = v1/a1;
        double t2 = v2/a2;
        printf("Case %d: %0.8lf %0.8lf\n", i+1, s1+s2, v3*max(t1,t2));
    }
    return 0;
}
