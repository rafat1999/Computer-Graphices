#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;
void flood(int,int,int,int);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1,y1,x2,y2;

    cout<< "Enter X1,Y1 point: ";
    cin>>x1>>y1;
    cout<< "Enter X2,Y2 point: ";
    cin>>x2>>y2;
    rectangle(x1,y1,x2,y2);
    int f_x,f_y,f_fill, f_defult;
    cout<< "Enter the value for the flood x1, y1: ";
    cin>>f_x>>f_y;
    cout<< " Enter the value for the fill color and diffult color: ";
    cin>>f_fill>>f_defult;
    flood(f_x,f_y,f_fill,f_defult);
    getch();
}
void flood(int x,int y,int fillColor, int defaultColor)
{
    if(getpixel(x,y)==defaultColor)
    {
        delay(1);
        putpixel(x,y,fillColor);
        flood(x+1,y,fillColor,defaultColor);
        flood(x-1,y,fillColor,defaultColor);
        flood(x,y+1,fillColor,defaultColor);
        flood(x,y-1,fillColor,defaultColor);
    }
}
