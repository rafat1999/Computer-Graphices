#include<iostream>
#include<graphics.h>
#include<cmath>
#include<math.h>

using namespace std;
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");

    int sh_x, sh_y, a[3][3],x;
    int n_a[3][3];

    cout<< "Enter the 1st coordinate: ";
    cin>>a[0][0]>>a[1][0];

    cout<< "Enter the 1st coordinate: ";
    cin>>a[0][1]>>a[1][1];

    cout<< "Enter the 1st coordinate: ";
    cin>>a[0][2]>>a[1][2];

    line(320,0,320,479);
    line(0,240,639,240);

    line(a[0][0],a[1][0],a[0][1],a[1][0]);
    line(a[0][1],a[1][0],a[0][2],a[1][2]);
    line(a[0][0],a[1][0],a[0][2],a[1][2]);

    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<< "Enter 1. For X-Shear: "<<endl;
    cout<< "Enter 2. For Y-Shear: "<<endl;
    cout<< "Enter 3. For XY-Shear: "<<endl;
    cin>>x;
    cout<<endl<<endl;

    switch(x)
    {
    case 1:
        cout<< "Enter the value of Shearing parameter(Sh_x): ";
        cin>>sh_x;
        cout<< "Enter the value of Shearing parameter(Sh_y): ";
        cin>>sh_y;

        n_a[0][0] = (a[0][0] + (sh_x * a[1][0]));
        n_a[1][0] = a[1][0];

        n_a[0][1] = (a[0][1] + (sh_x * a[1][1]));
        n_a[1][1] = a[1][1];

        n_a[0][2] = (a[0][2] + (sh_x * a[1][2]));
        n_a[1][2] = a[1][2];

        line(320,0,320,479);
        line(0,240,639,240);


        line(n_a[0][0],n_a[1][0],n_a[0][1],n_a[1][1]);
        line(n_a[0][1],n_a[1][1],n_a[0][2],n_a[1][2]);
        line(n_a[0][0],n_a[1][0],n_a[0][2],n_a[1][2]);

        getch();
        break;

    case 2:
        cout<< "Enter the value of Shearing parameter(Sh_x): ";
        cin>>sh_x;
        cout<< "Enter the value of Shearing parameter(Sh_y): ";
        cin>>sh_y;

        n_a[1][0] = (a[1][0] + (sh_y * a[0][0]));
        n_a[0][0] = a[0][0];

        n_a[1][1] = (a[1][1] + (sh_y * a[0][1]));
        n_a[0][1] = a[1][1];

        n_a[1][2] = (a[1][2] + (sh_y * a[0][2]));
        n_a[0][2] = a[1][2];

        line(320,0,320,479);
        line(0,240,639,240);


        line(n_a[0][0],n_a[1][0],n_a[0][1],n_a[1][1]);
        line(n_a[0][1],n_a[1][1],n_a[0][2],n_a[1][2]);
        line(n_a[0][0],n_a[1][0],n_a[0][2],n_a[1][2]);

        getch();
        break;

    case 3:
        cout<< "Enter the value of Shearing parameter(Sh_x): ";
        cin>>sh_x;
        cout<< "Enter the value of Shearing parameter(Sh_y): ";
        cin>>sh_y;

        n_a[0][0] = (a[0][0] + (sh_x * a[1][0]));
        n_a[1][0] = a[1][0];

        n_a[0][1] = (a[0][1] + (sh_x * a[1][1]));
        n_a[1][1] = a[1][1];

        n_a[0][2] = (a[0][2] + (sh_x * a[1][2]));
        n_a[1][2] = a[1][2];

        line(320,0,320,479);
        line(0,240,639,240);


        line(n_a[0][0],n_a[1][0],n_a[0][1],n_a[1][1]);
        line(n_a[0][1],n_a[1][1],n_a[0][2],n_a[1][2]);
        line(n_a[0][0],n_a[1][0],n_a[0][2],n_a[1][2]);


        line(320,0,320,479);
        line(0,240,639,240);

        n_a[1][0] = (a[1][0] + (sh_y * a[0][0]));
        n_a[0][0] = a[0][0];

        n_a[1][1] = (a[1][1] + (sh_y * a[0][1]));
        n_a[0][1] = a[1][1];

        n_a[1][2] = (a[1][2] + (sh_y * a[0][2]));
        n_a[0][2] = a[1][2];

        line(320,0,320,479);
        line(0,240,639,240);


        line(n_a[0][0],n_a[1][0],n_a[0][1],n_a[1][1]);
        line(n_a[0][1],n_a[1][1],n_a[0][2],n_a[1][2]);
        line(n_a[0][0],n_a[1][0],n_a[0][2],n_a[1][2]);

        getch();
        break;
    }

    getch();
    closegraph();
}
