#include<bits/stdc++.h>
#include<graphics.h>
#include <math.h>
using namespace std;
int driect_equcation(int x1,int y1,int x2,int y2)
{
    int x,y,c,dx,dy;
    float m,xf;
    dx=x2-x1;
    dy=y2-y1;
    m=(float)abs((y2-y1)/(x2-x1));
    c=y1-m*x1;

    if(m<1)
    {
        if(dx>0)
        {
            x=x1;
            y=y1;
            while(x<=x2)
            {
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                y=m*x+c;
                x++;
            }
        }
        else
        {
            x=x2;
            y=y2;
            while(x<=x1)
            {
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                y=m*x+c;
                x++;
            }
        }



    }


    else
    {
        if(dy>0)
        {
            x=x1;
            y=y1;

            while(y<=y2)
            {
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;

                xf=(y-c)/m;
                x=floor(xf+0.5);
                y++;
            }
        }
        else
        {
            x=x2;
            y=y2;
            while(y<=y1)
            {
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                xf=(y-c)/m;
                x=floor(xf+0.5);
                y++;
            }
        }




    }

}

int main()
{
    initwindow(500,400,"194010");
    setcolor(GREEN);

    driect_equcation(10,10,20,9);
    driect_equcation(10,380,30,379);


    while(!kbhit())
    {
        delay(200);
    }


}
