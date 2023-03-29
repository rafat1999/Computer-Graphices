/// S.H. Rafat
/// Bangladesh Army University of Science and Technology(BAUST)
/// Dept of CSE


#include<iostream>
#include<graphics.h>
#include<math.h>
#include<cmath>

using namespace std;
int main()
{

    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    const double pi = 3.1416;

    int r, xc, yc, angle;

    float x, y;
    cout<< "Enter the center point(xc): ";
    cin>> xc;
    cout<< "Enter the center point(yc): ";
    cin>> yc;
    cout<< "Enter the redius of the circle: ";
    cin>> r;

    cout<< "Enter the angle: ";
    cin>> angle;

    for(int i = 0; i<= angle; i++)
    {
        float radians = i *( pi / 180);
        float c = cos(radians);
        float s = sin(radians);
        x = xc + (r * c);
        y = yc + (r * s);
        putpixel((int)(x), (int)(y), WHITE);
    }

    getch();
    closegraph();
}


