// C program to draw a rectangle
#include <graphics.h>

// Driver code
int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int left = 150, top = 150;
    int right = 450, bottom = 450;

    rectangle(left, top, right, bottom);

    getch();

    closegraph();

    return 0;
}
