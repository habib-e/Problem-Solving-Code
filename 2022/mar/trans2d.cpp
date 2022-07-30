#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    initwindow (600, 600, "Cohen Shutterland Line Clipping Algo");

    cout<<"1.Translation\n2.Rotation\n3.Scaling  "<<endl;
    cout<<"Selection: ";
    cin>>s;
    switch(s)
    {
    case 1:
    {
        int x1,y1,x2,y2;
        cout<<"enter the co-ordinates of rectangle(x1,y1),(x2,y2)\n";
        cin>>x1>>y1>>x2>>y2;//200 150 300 250
        cout<<"Enter the translation factor (tx,ty): ";
        int tx,ty;
        cin>>tx>>ty;//50 50
        cout<<"Rectangle before translation"<<endl;
        setcolor(3);
        rectangle(x1,y1,x2,y2);
        setcolor(4);
        cout<<"Rectangle after translation"<<endl;
        rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
        getch();
        break;
    }
    case 2:
    {
        int x1,y1,x2,y2;
        cout<<"enter the co-ordinates of rectangle(x1,y1),(x2,y2)\n";
        cin>>x1>>y1>>x2>>y2;//200 200 300 300
        double a;
        cout<<"Rectangle with rotation"<<endl;
        setcolor(3);
        rectangle(x1,y1,x2,y2);
        cout<<"Angle of rotation:";
        cin>>a;//90
        a=(a*3.14)/180;
        long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
        long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
        setcolor(2);
        rectangle(x1,y1,xr,yr);
        getch();
        break;
    }
    case 3:
    {
        int x1,y1,x2,y2;
        cout<<"enter the co-ordinates of rectangle(x1,y1),(x2,y2)\n";
        cin>>x1>>y1>>x2>>y2;//30 30 70 70
        cout<<"Enter the scalling factor (sx,sy): ";
        int sx,sy;
        cin>>sx>>sy;//2 2
        cout<<"Before scaling"<<endl;
        setcolor(3);
        rectangle(x1,y1,x2,y2);
        cout<<"After scaling"<<endl;
        setcolor(2);
        int a=x1*sx;
        int b=y1*sy;
        int c=x2*sx;
        int d=y2*sy;
        rectangle(a,b,c,d);
        getch();
        break;
    }

    default:
    {
        cout<<"Invalid Selection"<<endl;
        break;
    }
    }
    closegraph();
    return 0;
}
