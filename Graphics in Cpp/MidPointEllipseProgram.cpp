#include <graphics.h>
#include<iostream>
#include<conio.h>
#include"stdlib.h"
using namespace std;
void MidpointEllipse(int a, int b, int xc, int yc)
{
int x=0;
 
int y=b;
//Region 1
int p=(b*b)-(a*a*b)+(0.25*a*a); do
{
putpixel(xc+x,yc+y,WHITE); putpixel(xc+x,yc-y,RED); putpixel(xc-x,yc+y,GREEN); putpixel(xc-x,yc-y,YELLOW); if(p<0)
{
x=x+1; p=p+2*b*b*x+b*b;
}
else
{
x=x+1; y=y-1;
p=p+2*b*b*x-2*a*a*y+b*b;
}
}while(2*b*b*x<2*a*a*y);
///*
//Region 2
p=(b*b*(x+0.5)*(x+0.5))+((y-1)*(y-1)*a*a-a*a*b*b); do
{
putpixel(xc+x,yc+y,WHITE); putpixel(xc+x,yc-y,RED); putpixel(xc-x,yc+y,GREEN); putpixel(xc-x,yc-y,YELLOW); if(p>0)
{
y=y-1;
p=p-2*a*a*y+a*a;
}
else
{
x=x+1; y=y-1;
p=p-2*a*a*y+2*b*b*x+a*a;
}
}while(y!=0);
// */
}

int main()
{
int h,k,a,b;
int gd = DETECT, gm,i=0; initgraph(&gd, &gm,"");
 
// cout<<"\n ENTER CENTER OF ELLIPSE"; cout<<"\n ENTER CENTER  (h, k) :";
cin>>h>>k; k= 240-k; h= 320+h;
cout<<"\n ENTER LENGTH OF MAJOR AND MINOR AXIS";
cin>>a>>b;

line(getmaxx()/2,0,getmaxx()/2,getmaxy()); line(0,getmaxy()/2,getmaxx(),getmaxy()/2);

MidpointEllipse(a,b,h,k);

printf("\nOUTPUT IS DISPLAYED ON ANOTHER WINDOW:");


getch(); closegraph();

}
