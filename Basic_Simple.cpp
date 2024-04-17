#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int X,Y;
    initwindow(500,400,"My_Windows");
    X=getmaxx();
    Y=getmaxy();

    setcolor(GREEN);
    rectangle(10,10,X-10,Y-10);
    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);

    arc(X-10, 10, 180,270, 10);






    while(!kbhit())
    {
        delay(200);
    }

}

