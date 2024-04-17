#include<bits/stdc++.h>
#include<graphics.h>
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
int main()
{

    initwindow(500,400,"194008");
    bresanham_circle(25,250,200);

    while(!kbhit())
    {
        delay(200);
    }


}
