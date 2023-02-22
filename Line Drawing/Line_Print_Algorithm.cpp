/// Lab -02 (08-02-2023)

/// Exersize-01

///Line Print Algorithm

/*#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    int x1,y2,x2;
    cout<< "Enter the value of X1: ";
    cin>>x1;
    int y1;
    cout<< "Enter the value of Y1: ";
    cin>>y1;
    cout<< "Enter the value of X2: ";
    cin>>x2;
    cout<< "Enter the value of Y2: ";
    cin>>y2;

    float m = {(y2-y1)/(x2-x1)};
    float b = {y1-(m*x1)};

    for(int i=x1; i<=x2; i++)
    {
        float y = {(m*(i))+b};
        putpixel(i,y, RED);

    }

    getch();
    closegraph();
}*/


///Exersize -02 (DDA Algorithm)
#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    int x1,y2,x2,x0,y0,step;
    float xinc,yinc;
    cout<< "Enter the value of X1: ";
    cin>>x1;
    int y1;
    cout<< "Enter the value of Y1: ";
    cin>>y1;
    cout<< "Enter the value of X2: ";
    cin>>x2;
    cout<< "Enter the value of Y2: ";
    cin>>y2;

    int delx = (x2-x1);
    int dely = (y2-y1);
    if(delx>dely)
    {
        step = delx;
    }
    else
    {
        step = dely;
    }

    cout<< step;

    xinc =(float) delx/step;
    yinc = (float)delx/step;

    float x = x1;
    float y = y1;

    for(int i=0; i<step; i++)
    {
       x += xinc;
       y += yinc;
       putpixel((int)(x+0.5), (int)(y+0.5),WHITE);
    }

    getch();
    closegraph();

}
