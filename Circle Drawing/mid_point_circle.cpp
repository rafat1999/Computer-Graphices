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

    int r, xc, yc;

    cout<< "Enter the center point(xc): ";
    cin>> xc;
    cout<< "Enter the center point(yc): ";
    cin>> yc;
    cout<< "Enter the redius of the circle: ";
    cin>> r;
    int x = 0;
    int y = r;
    putpixel(x,y, WHITE);

    int pk = 1- r;
    while(x < y)
    {
        if(pk < 0)
        {
            x++;
            pk = pk + (2 * x) +1;
            putpixel(x+xc, y+yc, WHITE);
            putpixel(-x+xc, y+yc, WHITE);
            putpixel(x+xc, -y+yc, WHITE);
            putpixel(-x+xc, -y+yc, WHITE);
            putpixel(y+xc, x+yc, WHITE);
            putpixel(-y+xc, x+yc, WHITE);
            putpixel(y+xc, -x+yc, WHITE);
            putpixel(-y+xc, -x+yc, WHITE);

        }
        else
        {
            x++;
            y--;
            pk = pk + (2 * x) + 1 - (2 * y);
            putpixel(x+xc, y+yc, WHITE);
            putpixel(-x+xc, y+yc, WHITE);
            putpixel(x+xc, -y+yc, WHITE);
            putpixel(-x+xc, -y+yc, WHITE);
            putpixel(y+xc, x+yc, WHITE);
            putpixel(-y+xc, x+yc, WHITE);
            putpixel(y+xc, -x+yc, WHITE);
            putpixel(-y+xc, -x+yc, WHITE);
        }

    }
    getch();
    closegraph();
}
