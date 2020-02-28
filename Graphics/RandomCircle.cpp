#include<Windows.h>
#define MX 99999
#include<graphics.h>
#include<time.h>
#include <unistd.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    for(int t=1; t<=20; t++)
    {
       setcolor(RED);
       int x=rand()%300;
       int y=rand()%300;
       int r=rand()%100;
       //circle(rand()%200,rand()%200,rand()%50);
       circle(x,y,r);
       usleep(MX);
       cleardevice();
    }
    getch();
    closegraph();
    return 0;
}


