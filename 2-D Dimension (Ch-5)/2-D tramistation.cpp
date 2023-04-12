#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    int x1,x2,y1,y2, tx1,tx2,ty1,ty2;

    cout << "Enter the value of x1, y1: ";
    cin>> x1;
    cin>> y1;


    cout<< "Enter the value for changing the point of tx1 and ty1: ";
    cin>> tx1;
    cin>> ty1;


    int n_x = x1 + tx1;
    int n_y = y1 + ty1;
    putpixel(x1,y1, WHITE);

    putpixel(n_x,n_y, WHITE);

    getch ();
}

