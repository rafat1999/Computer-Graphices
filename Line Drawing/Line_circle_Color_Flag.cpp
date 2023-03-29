/// S.H. Rafat
/// Bangladesh Army University of Science and Technology(BAUST)
/// Dept of CSE

/// LAB- 01(25-01-2023)
/// Line, Rectangle and Circle
#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    //line(10,10,100,130);

    line(10,10,210,10);
    line(10,130,210,130);
    line(10,10,10,130);
    line(210,10,210,130);
    circle(100,70,40);

    setcolor(GREEN);
    rectangle(40,80,600,400);
    floodfill(320,240,GREEN);

    setcolor(RED);
    circle(320,240,100);
    floodfill(320,240,RED);



    getch();
    closegraph();
}

/// Flag Print & Flag Color
/*#include <iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(WHITE);
    line(10,10,210,10);
    line(10,130,210,130);
    line(10,10,10,130);
    line(210,10,210,130);
    setfillstyle(1,GREEN);
    floodfill(110,20,WHITE);
    setcolor(WHITE);
    circle(100,70,40);
    setfillstyle(1,RED);
    floodfill(110,80,WHITE);


    getch();
    closegraph();

}*/
