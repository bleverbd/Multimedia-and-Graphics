#include<bits/stdc++.h>
#include<graphics.h>
#include <math.h>
using namespace std;
int bresenham(int x1,int y1,int x2,int y2)
{
    int dx,dy,inc1,inc2,d;
    float m;
    m=(float)abs((y2-y1)/(x2-x1));

    cout<<m<<endl;

    if(m<=1)
    {
        dx=x2-x1;
        dy=y2-y1;
        inc1=2*dy;
        inc2=2*(dy-dx);
        d=2*dy-dx;
        if(dx>0)
        {
            while(x1<=x2)
            {
                putpixel(x1,y1,15);
                cout<<x1<<" "<<y1<<endl;
                cout<<m<<endl;
                delay(200);
                if(d<=0)
                {
                    d=d+inc1;

                }
                else
                {
                    d=d+inc2;
                    y1++;
                }
                x1++;
            }
        }
        else
        {
            while(x2<=x1)
            {
                putpixel(x2,y2,15);
                cout<<x2<<" "<<y2<<endl;
                delay(200);
                if(d<=0)
                {
                    d=d+inc1;
                    y2++;

                }
                else
                {
                    d=d+inc2;

                }
                x2++;
            }

        }

    }
    else if (m>1)
    {
        dx=x2-x1;
        dy=y2-y1;

        inc1=2*dx;
        inc2=2*(dx-dy);
        d=2*dx-dy;
        if(dy>0)
        {


            while(y1<=y2)
            {
                putpixel(x1,y1,15);
                cout<<x1<<" "<<y1<<endl;
                delay(200);
                if(d<=0)
                {
                    d=d+inc1;

                }
                else
                {
                    d=d+inc2;
                    x1++;
                }
                y1++;
            }

        }

        else
        {

            while(y2<=y1)
            {
                putpixel(x2,y2,15);
                cout<<x2<<" "<<y2<<endl;
                delay(200);
                if(d<=0)
                {
                    d=d+inc1;
                     x2++;

                }
                else
                {
                    d=d+inc2;

                }
                y2++;
            }


        }




    }
}


int main()
{
    initwindow(500,400,"194010");
    setcolor(GREEN);

    bresenham(10,10,20,9);
    bresenham(20,9,10,10);
    bresenham(10,380,30,379);
    bresenham(480,10,479,40);
    bresenham(479,40,480,10);




    while(!kbhit())
    {
        delay(200);
    }


}
