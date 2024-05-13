#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void bresanham_circle(int r,int h,int k)
{
    int x=0,y,p=1-r;
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

        if(p<=0)
        {
            p=p+2*r+3;

        }
        else
        {
            p=p+2*(x-y)+5;
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
