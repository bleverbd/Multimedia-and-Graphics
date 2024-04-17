#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int x,y,x1,y1,x2,y2,X,Y,c,dx,dy;
    float m,xf;
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
    c=y1-m*x1;

    if(m<1)
    {
        if(dx>0)
        {
            x=x1;
            y=y1;
            while(x<=x2)
            {
                putpixel(X/2+x,Y/2+y,15);
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
                putpixel(X/2+x,Y/2+y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                y=m*x+c;
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
            x=x1;
            y=y1;

            while(y<=y2)
            {
              putpixel(X/2+x,Y/2+y,15);
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
                putpixel(X/2+x,Y/2+y,15);
                delay(200);
                cout<<x<<" "<<y<<endl;
                xf=(y-c)/m;
                x=floor(xf+0.5);
                y++;
            }
        }

        while(!kbhit())
        {
            delay(200);
        }

    }
}
