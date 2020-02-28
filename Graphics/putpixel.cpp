#include<Windows.h>
#define MX 99999
#include<graphics.h>
#include<time.h>
#include <unistd.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    for(int t=1; t<=500000; t++)
    {
       putpixel(rand()%400,rand()%400,rand()%15);
       delay(50);
       putpixel(rand()%400,rand()%400,rand()%YELLOW);
       delay(50);
    }
    getch();
    closegraph();
    return 0;
}

