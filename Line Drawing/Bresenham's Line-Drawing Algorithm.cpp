#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    int x1,x2,y1,y2;
    int dx, dy;
    cout<< "Enter the value of X1: ";
    cin>> x1;
    cout<< "Enter the value of Y1: ";
    cin>> y1;
    cout<< "Enter the value of X1: ";
    cin>> x2;
    cout<< "Enter the value of Y1: ";
    cin>> y2;
    int x = x1;
    int y = y1;
    dx = x2 - x1;
    dy = y2 - y1;

    int pk = (2 * dy) - dx;

    for(int i = 0; i < dx; i++)
    {
        if(pk < 0)
        {
            pk = pk + (2 * dy);
            x++;
            cout << x << " " << y << " " << pk<< "\n";
            putpixel(x, y, WHITE);
        }
        else
        {
            pk = pk + ((2 * dy) - (2 * dx));
            x++;
            y++;
            cout<< x << " "<< y<<" " << pk<<"\n";
            putpixel(x, y, WHITE);
        }
    }

    getch();
    closegraph();

}
