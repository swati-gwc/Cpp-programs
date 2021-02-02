/* Write a menu driven program to perform translation, scaling, rotation on a triangle. */

#include <graphics.h>
#include<iostream>
# include<math.h>
#include<conio.h>
#include"stdlib.h"
using namespace std;

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm,"");
   int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
    int sx,sy,xt,yt;
    float r,t;



    line(getmaxx()/2,0, getmaxx()/2, getmaxy());
    line(0, getmaxy()/2, getmaxx(), getmaxy()/2);

    printf("\n\nEnter points of triangle ");
    printf("x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("x2 and y2: ");
    scanf("%d%d",&x2,&y2);
    printf("x3 and y3:");
    scanf("%d%d",&x3,&y3);

    setcolor(WHITE);
    line(320+x1,240-y1,320+x2,240-y2);
    line(320+x2,240-y2,320+x3,240-y3);
    line(320+x3,240-y3,320+x1,240-y1);

    printf("\nChoose from below: ");
    printf("\n1. Translation\n2. Rotation\n3. Scaling\n4. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            {
                printf("Enter the translation factor: ");
                scanf("%d%d",&xt,&yt);
                nx1=x1+xt;
                ny1=y1+yt;
                nx2=x2+xt;
                ny2=y2+yt;
                nx3=x3+xt;
                ny3=y3+yt;

                setcolor(YELLOW);
                line(320+nx1,240-ny1,320+nx2,240-ny2);
                line(320+nx2,240-ny2,320+nx3,240-ny3);
                line(320+nx3,240-ny3,320+nx1,240-ny1);
                break;
            }
        case 2:
            {
                printf("Enter the angle of rotation: ");
                scanf("%f",&r);
                t=3.14*r/180;

                nx1=floor(x1*cos(t)-y1*sin(t));
                ny1=floor(x1*sin(t)+y1*cos(t));
                nx2=floor(x2*cos(t)-y2*sin(t));
                ny2=floor(x2*sin(t)+y2*cos(t));
                nx3=floor(x3*cos(t)-y3*sin(t));
                ny3=floor(x3*sin(t)+y3*cos(t));

                setcolor(CYAN);
                line(320+nx1,240-ny1,320+nx2,240-ny2);
                line(320+nx2,240-ny2,320+nx3,240-ny3);
                line(320+nx3,240-ny3,320+nx1,240-ny1);
                break;
            }
        case 3:
            {
                printf("Enter the scaling factor: ");
                scanf("%d%d",&sx,&sy);
                nx1=x1*sx;
                ny1=y1*sy;
                nx2=x2*sx;
                ny2=y2*sy;
                nx3=x3*sx;
                ny3=y3*sy;

                setcolor(15);
                line(320+nx1,240-ny1,320+nx2,240-ny2);
                line(320+nx2,240-ny2,320+nx3,240-ny3);
                line(320+nx3,240-ny3,320+nx1,240-ny1);
                break;
            }
        case 4:
            {
                break;
            }
        default:
            {
                printf("Incorrect choice. Try again");
            }
    }
    getch();
    closegraph();
}
