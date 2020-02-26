#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int n=0;

    while(1){
        n++;
        setcolor(rand()%20);
        line(rand()%200,rand()%300,rand()%200,rand()%400);
        delay(100);

        if(n>100){
            cleardevice();
            n=0;
        }

    }
    getch();
    closegraph();
    return 0;
}
