#include<bits/stdc++.h>
#include<graphics.h>
#include <math.h>
using namespace std;
int DDA(int x1,int y1,int x2,int y2)
{
    int x,y,c,dx,dy;
    float m,xf,yf;
    dx=x2-x1;
    dy=y2-y1;
    m=(float)abs((y2-y1)/(x2-x1));

    if(m<=1)
    {
        if(dx>0)
        {
            x=x1;
            yf=y1;
            while(x<=x2)
            {
                y=floor(yf+0.5);
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                yf=yf+m;
                x++;
            }
        }
        else
        {
            x=x2;
            yf=y2;

            while(x<=x1)
            {
                y=floor(yf+0.5);
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                yf=yf+m;
                x++;
            }
        }




    }


    else
    {
        if(dy>0)
        {
            xf=x1;
            y=y1;

            while(y<=y2)
            {
                x=floor(xf+0.5);
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                xf=xf+(1.0/m);
                y++;
            }
        }
        else
        {
            xf=x2;
            y=y2;
            while(y<=y1)
            {
                x=floor(xf+0.5);
                putpixel(x,y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                xf=xf+(1.0/m);
                y++;
            }
        }



    }

}

int main()
{
    initwindow(500,400,"194010");
    setcolor(GREEN);

    //DDA(10,10,20,9);
    DDA(20,9,10,10);
    //DDA(10,380,30,379);
    //DDA(480,10,479,380);



    while(!kbhit())
    {
        delay(200);
    }


}
