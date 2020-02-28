
// C Implementation for drawing circle
#include <graphics.h>

//driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file
    int gd = DETECT, gm;


    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm, "");

    // circle fuction
    circle(250, 200, 100);

    getch();

    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}
