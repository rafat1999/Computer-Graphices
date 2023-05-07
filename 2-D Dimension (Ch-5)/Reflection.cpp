#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    int x, a[3][3];
    double b[3][3], c[3][3];

    cout<< "Enter the 1st coordinate: ";
    cin>>a[0][0]>>a[1][0];
    cout<< "Enter the 2nd coordinate: ";
    cin>>a[0][1]>>a[1][1];
    cout<< "Enter the 3rd coordinate: ";
    cin>>a[0][2]>>a[1][2];


    line(320,0,320,479);
    line(0,240,639,240);

    line(a[0][0],a[1][0],a[0][1], a[1][1]);
    line(a[0][1],a[1][1],a[0][2], a[1][2]);
    line(a[0][0],a[1][0],a[0][2], a[1][2]);

    cout<< "\n\nEnter 1. for the X axis reflection"<<endl;
    cout<< "Enter 2. for the Y axis reflection"<<endl;
    cout<< "Enter 3. for the X,Y axis reflection"<<endl;
    cin>>x;

    switch(x)
    {
    case 1:
        b[0][0] = 640 - a[0][0];
        b[0][1] = 640 - a[0][1];
        b[0][2] = 640 - a[0][2];
        b[1][0] = a[1][0];
        b[1][1] = a[1][1];
        b[1][2] = a[1][2];

        line(320,0,320,479);
        line(0,240,639,240);

        line(b[0][0],b[1][0],b[0][1],b[1][1]);
        line(b[0][1],b[1][1],b[0][2],b[1][2]);
        line(b[0][0],b[1][0],b[0][2],b[1][2]);

        getch();
        break;

    case 2:
        b[1][0] = 480 - a[1][0];
        b[1][1] = 480 - a[1][1];
        b[1][2] = 480 - a[1][2];
        b[0][0] = a[0][0];
        b[0][1] = a[0][1];
        b[0][2] = a[0][2];

        line(320,0,320,479);
        line(0,240,639,240);

        line(b[0][0],b[1][0],b[0][1],b[1][1]);
        line(b[0][1],b[1][1],b[0][2],b[1][2]);
        line(b[0][0],b[1][0],b[0][2],b[1][2]);

        getch();
        break;

    case 3:
        b[0][0] = 640 - a[0][0];
        b[0][1] = 640 - a[0][1];
        b[0][2] = 640 - a[0][2];
        b[1][0] = a[1][0];
        b[1][1] = a[1][1];
        b[1][2] = a[1][2];

        line(320,0,320,479);
        line(0,240,639,240);

        line(b[0][0],b[1][0],b[0][1],b[1][1]);
        line(b[0][1],b[1][1],b[0][2],b[1][2]);
        line(b[0][0],b[1][0],b[0][2],b[1][2]);

        line(320,0,320,479);
        line(0,240,639,240);

        b[1][0] = 480 - a[1][0];
        b[1][1] = 480 - a[1][1];
        b[1][2] = 480 - a[1][2];
        b[0][0] = a[0][0];
        b[0][1] = a[0][1];
        b[0][2] = a[0][2];

        line(320,0,320,479);
        line(0,240,639,240);

        line(b[0][0],b[1][0],b[0][1],b[1][1]);
        line(b[0][1],b[1][1],b[0][2],b[1][2]);
        line(b[0][0],b[1][0],b[0][2],b[1][2]);


    }



    getch();
    closegraph();



}
