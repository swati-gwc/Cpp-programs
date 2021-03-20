#include <graphics.h>
#include<iostream>
#include<conio.h>
#include"stdlib.h"
using namespace std;
void DrawCircle(int xc,int yc,int x,int y)
{
        putpixel(x+xc,y+yc,1);
        putpixel(x+xc,-y+yc,2);
        putpixel(-x+xc,-y+yc,3);
        putpixel(-x+xc,y+yc,4);
        putpixel(y+xc,x+yc,5);
        putpixel(y+xc,-x+yc,6);
        putpixel(-y+xc,-x+yc,15);
        putpixel(-y+xc,x+yc,14);
}

void BresenhamCircle(int xc,int yc,int r)
{
    int x=0,y=r,d=3-(2*r);
    DrawCircle(xc,yc,x,y);

    while(x<=y)
     {
          if(d<=0)
          {
            d=d+(4*x)+6;
          }
         else
          {
            d=d+(4*x)-(4*y)+10;
            y=y-1;
          }

       x=x+1;
       DrawCircle(xc,yc,x,y);
    }
}
int main()
{
     int xc,yc,r,c;
    int gd = DETECT, gm,i=0;
    initgraph(&gd, &gm,"");
printf("Enter the values of Xc and Yc [Max y: 240, x: 320]:");
    scanf("%d%d",&xc,&yc);
    printf("Enter the value of radius ( r ) [max 240]:");
    scanf("%d",&r);
    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
    line(0,getmaxy()/2,getmaxx(),getmaxy()/2);

    if(yc<0) yc = 240-yc;
    else yc = 240-yc;
    if(xc>0) xc = 320+xc;
    else xc = 320+xc;

    printf("\nOUTPUT IS DISPLAYED ON ANOTHER WINDOW:");
    BresenhamCircle(xc,yc,r);
	getch();
	closegraph();

}
