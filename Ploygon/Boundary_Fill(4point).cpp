#include<iostream>
#include<graphics.h>

using namespace std;

// Function for 4 connected channel

void boundary_fill_4(int x, int  y, int fill_color, int boundary_color)
{

    if(getpixel(x,y) != boundary_color && getpixel(x,y) != fill_color)
    {
        putpixel(x,y,fill_color);
        boundary_fill_4(x + 1, y, fill_color, boundary_color);
        boundary_fill_4(x, y + 1, fill_color, boundary_color);
        boundary_fill_4(x - 1, y, fill_color, boundary_color);
        boundary_fill_4(x, y - 1, fill_color, boundary_color);
    }
}

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");
    int x, y, redius;

    cout<< "Enter the value of x: ";
    cin>>x;
    cout<< "Enter the value of y: ";
    cin>>y;
    cout<< "Enter the redius: ";
    cin>>redius;

    // Draw the circle
    circle(x,y,redius);

    int fill_color, boundary_color;
    cout<< "Enter the value of fill color: ";
    cin>>fill_color;
    cout<< "Enter the value of boundary color: ";
    cin>> boundary_color;

    // now call the function

    boundary_fill_4(x, y, fill_color, boundary_color);
    delay(10000);

    getch();
    closegraph();

}
