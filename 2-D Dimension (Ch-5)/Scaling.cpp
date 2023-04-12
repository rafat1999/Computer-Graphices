#include<iostream>
#include<cmath>
#include<graphics.h>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    int x1,x2,y1,y2,sx,sy;

    cout<< "Enter the value of X1 and Y1: ";
    cin>>x1;
    cin>>y1;
    cout<< "Enter the value of X2 and Y2: ";
    cin>>x2;
    cin>>y2;

    line(x1,y1,x2,y2);

    cout<< "Enter the scaling factor: ";
    cin>> sx>>sy;

    int xf,yf;
    cout<< "Enter the fixed point: ";
    cin>>xf;
    cin>>yf;
    int n_x1 = ((x1 * sx) + (xf * (1 - sx)));
    int n_y1 = ((y1 * sy) + (yf * (1 - sy)));
    int n_x2 = ((x2 * sx) + (xf * (1 - sx)));
    int n_y2 = ((y2 * sy) + (yf * (1 - sy)));

    setcolor(RED);
    line(n_x1,n_y1,n_x2,n_y2);

    getch();
    closegraph();



}
