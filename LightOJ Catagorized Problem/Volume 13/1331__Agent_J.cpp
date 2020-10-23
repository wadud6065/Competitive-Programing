#include<iostream>
#include<limits>
#include<cmath>
#define pi 3.1415926535897932384626;
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        double R1, R2, R3;
        cin >> R1 >> R2 >> R3;
        double sum = 2*(R1 + R2 + R3);
        double a = R1+R2, b = R1+R3, c = R2+R3;

        sum = sum / 2;
        double area_of_triangle = sqrt(sum*(sum-a)*(sum-b)*(sum-c));
        ///cout << area_of_triangle << endl;

        ///For claculting the angles....
        double angle_of_R1 = acos((a*a + b*b - c*c)/(2*a*b));
        double angle_of_R2 = acos((a*a + c*c - b*b)/(2*a*c));
        double angle_of_R3 = acos((c*c + b*b - a*a)/(2*c*b));
        angle_of_R1 = angle_of_R1 * 180 / pi;
        angle_of_R2 = angle_of_R2 * 180 / pi;
        angle_of_R3 = angle_of_R3 * 180 / pi;
        ///cout << angle_of_R1 << " " << angle_of_R2 << " " << angle_of_R3 << endl;

        ///For claculting the areas of circles...
        double area_for_R1 = (angle_of_R1/360)* 3.1415926535897932384626 *R1*R1;
        double area_for_R2 = (angle_of_R2/360)* 3.1415926535897932384626 *R2*R2;
        double area_for_R3 = (angle_of_R3/360)* 3.1415926535897932384626 *R3*R3;
        double sum_of_area = area_for_R1 + area_for_R2 + area_for_R3;

        double result = area_of_triangle - sum_of_area;

        cout.precision(9);
        cout << "Case " << i+1 << ": " << fixed << result << endl;
    }
    return 0;
}
