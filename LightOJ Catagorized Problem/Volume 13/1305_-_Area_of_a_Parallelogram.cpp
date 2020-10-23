#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
        Dx = Ax - Bx + Cx;
        Dy = Ay - By + Cy;
        int area = (Ax*By + Bx*Cy + Cx*Ay - Ax*Cy - Cx*By - Bx*Ay);
        if(area < 0)
          area = area - area - area;
        cout <<"Case"<<" "<< i+1 << ":" <<" "<< Dx << " " << Dy
            << " " << area << endl;
    }
    return 0;
}