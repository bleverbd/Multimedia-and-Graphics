#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    float x,y,x1,y1,x2,y2,X,Y,c,dx,dy;
    float m,xf,yf;
    cout<<"Enter the first Point(x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter the Second Point(x2,y2): ";
    cin>>x2>>y2;

    initwindow(500,400,"194010");
    X=getmaxx();
    Y=getmaxy();

    setcolor(GREEN);
    rectangle(0,0,X,Y);

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);



    dx=x2-x1;
    dy=y2-y1;
    m=(float)abs((y2-y1)/(x2-x1));
    cout<<m<<endl;

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


        while(!kbhit())
        {
            delay(200);
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

        while(!kbhit())
        {
            delay(200);
        }

    }
}
