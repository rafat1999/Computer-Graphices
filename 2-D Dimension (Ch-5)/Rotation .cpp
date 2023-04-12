#include<iostream>
#include<cmath>
#include<graphics.h>

using namespace std;
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    const double pi = 3.1416;

    int x1, y1, x2, y2, angle;

    cout<< "Enter the value of X1 and Y1: ";
    cin>>x1;
    cin>>y1;

    cout<< "Enter the value of X2 and Y2: ";
    cin>>x2;
    cin>>y2;

    cout<< "Enter the angle: ";
    cin>> angle;

    float m = {(y2-y1)/(x2-x1)};
    float b = {y1-(m*x1)};




    for(int i=x1; i<=x2; i++)
    {
        float y = {(m*(i))+b};
        cout<< "x: "<<i<< " y: "<<y<< "\n";
        putpixel(i,y, WHITE);
        float radians =  angle*( pi / 180);
        float c = cos(radians);
        float s = sin(radians);
        float n_x = ((i * c) - (y * s));
        float n_y = ((i * s) + (y * c));
        putpixel((int)(n_x+0.5), (int)(n_y+0.5),WHITE);

    }

    getch();
    closegraph();
}
