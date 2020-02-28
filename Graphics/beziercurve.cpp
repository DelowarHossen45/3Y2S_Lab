#include<graphics.h>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;
void pixel(int xc,int yc,int x,int y);
int main()
{
	int gd,gm,xc,yc,r,x,y,p;
	//detectgraph(&gd,&gm);
	initgraph(&gd,&gm," ");

	printf("Enter center of circle :");
	scanf("%d%d",&xc,&yc);
	printf("Enter radius of circle :");
	scanf("%d",&r);

	x=0;
	y=r;
	p=1-r;
	pixel(xc,yc,x,y);

	while(x<y)
	{
		if(p<0)
		{
			x++;
			p=p+2*x+1;
		}
		else
		{
			x++;
			y--;
			p=p+2*(x-y)+1;
		}
		pixel(xc,yc,x,y);
	}

	getch();
	closegraph();
	return 0;
}

void pixel(int xc,int yc,int x,int y)
{

	putpixel(x+xc,y+yc,GREEN);
	putpixel(-x+xc,y+yc,GREEN);
	putpixel(x+xc, -y+yc,WHITE);
	putpixel(-x+xc, -y+yc, WHITE);
	putpixel(y+xc, x+yc, YELLOW);
	putpixel(y+xc, -x+yc, YELLOW);
    putpixel(-y+xc, x+yc, RED);
	putpixel(-y+xc, -x+yc, RED);
	delay(1000);
}
