#include<bits/stdc++.h>
#include<graphics.h>
#include <math.h>
using namespace std;
void bresanham_circle(int r,int h,int k)
{
    int x=0,y,d=3-2*r;
    y=r;

    while(x<=y)
    {
        putpixel(x+h,y+k,15);
        putpixel(-x+h,y+k,15);
        putpixel(-x+h,-y+k,15);
        putpixel(x+h,-y+k,15);
        putpixel(y+h,x+k,15);
        putpixel(-y+h,x+k,15);
        putpixel(-y+h,-x+k,15);
        putpixel(y+h,-x+k,15);

        cout<<x<<" "<<y<<endl;
        delay(200);

        if(d<=0)
        {
            d=d+4*r+6;

        }
        else
        {
            d=d+4*(x-y)+10;
            y--;
        }
        x++;
    }

}
void DDA(int x1,int y1,int x2,int y2)
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
    initwindow(200,150,"194010");
    setcolor(GREEN);

    DDA(10,10,190,9);
    DDA(10,10,9,140);
    DDA(10,140,190,139);
    bresanham_circle(15,90,75);




    while(!kbhit())
    {
        delay(200);
    }


}
