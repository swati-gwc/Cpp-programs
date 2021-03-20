#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int x[4],y[4],i;
    double put_x,put_y,t;
    int gr=DETECT,gm;
    initgraph(&gr,&gm,"C:\\TURBOC3\\BGI");

    printf("\nMADE BY SWATI TRIPATHI");
    printf("\nBEZIER CURVE IMPLEMENTATION\n");

    printf("\nPlease enter x and y coordinates\n");
    int X=getmaxx()/2;
    int Y= getmaxy()/2;
    line(X,0,X,getmaxy());
    line(0,Y,getmaxx(),Y);
   // stringstream strs;

    for(i=0;i<4;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
        putpixel(x[i]+X,Y-y[i],3);
    }

    for(i=0;i<4; i++)
    {
        if (i==3) break;
        setcolor(YELLOW);
        line(x[i]+X,Y-y[i],X+ x[i+1],Y-y[i+1]);


    }

    setcolor(CYAN);
    for(t=0.0;t<=1.0;t=t+0.001)
    {
        put_x = pow(1-t,3)*x[0] + 3*t*pow(1-t,2)*x[1] + 3*t*t*(1-t)*x[2] + pow(t,3)*x[3];
        put_y =  pow(1-t,3)*y[0] + 3*t*pow(1-t,2)*y[1] + 3*t*t*(1-t)*y[2] + pow(t,3)*y[3];
        putpixel(X+put_x,Y-put_y, WHITE);
    }
    getch();
    closegraph();

return 0;
}
