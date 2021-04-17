/*
AUTHOR: SWATI TRIPATHI
This program is an application of bezier curves. It draws numbers from 1 to 10. It was my open ended project in college for computer graphics in C++ subject. 
*/
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void drawcurve(int x[][3], int y[][3],int n)
{
   int i,ch;
   double put_x,put_y,t;
   setcolor(WHITE);
   for(i=0;i<n;i++)
    {
        for(t=0.0;t<=1.0;t=t+0.001)
        {
            put_x = pow(1-t,2)*x[i][0] + 2*t*(1-t)*x[i][1] + t*t*x[i][2];
            put_y =  pow(1-t,2)*y[i][0]+ 2*t*(1-t)*y[i][1] + t*t*y[i][2];
            putpixel(put_x,put_y, WHITE);
            delay(5);
        }
    }
    cout<<"Do you want to see convex hull also? Press 1 for yes and 0 for no \n";
    cin>>ch;
    setcolor(YELLOW);
    if(ch==1){
       for(i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
               line(x[i][j],y[i][j],x[i][j+1],y[i][j+1]) ;
            }

        }
    }

}
int main()
{
   // int x[3],y[3];
    int i,number,n,choice;

    int gr=DETECT,gm;
    initgraph(&gr,&gm,"C:\\TURBOC3\\BGI");

    //int eightX[][] =

    printf("\nMADE BY SWATI TRIPATHI");
    printf("\nTUTORIAL ON HOW TO DRAW NUMBERS\n");



    choice=1;
    do{
    printf("\nWhich number you want to draw? (1-10) \n");
    cin>>number;

    switch(number){

        case 1: line(50,150,150,50); line(150,50,150,450); line(50,450,250,450); break;

        case 2: {//done
                n=4;
                int x[][3]={{50,50,150},{150,250,250},{250,250,50},{50,150,250}};
                int y[][3]={{150,50,50},{50,50,250},{250,450,450},{450,450,450}};
                drawcurve(x,y,n);
                break;
                }
        case 3: {//done
                n=6;
                int a[][3]={{50,50,150},{150,250,250},{250,250,150},{150,250,250},{250,250,150},{150,50,50}};
                int b[][3]={{150,50,50},{50,50,150},{150,250,250},{250,250,350},{350,450,450},{450,450,350}};
                drawcurve(a,b,n);
                break;
                }
        case 4: {
                n=3;
                int a[][3]={{250,250,250},{250,100,50},{50,150,290}};
                int b[][3]={{450,250,50},{50,150,250},{250,250,290}};
                drawcurve(a,b,n);
                break;
                }
        case 5: {
                n=6;
                int a[][3]={{250,150,50},{50,50,50},{50,150,150},{150,250,250},{250,250,150},{150,150,50}};
                int b[][3]={{50,50,50},{50,150,250},{250,250,250},{250,250,350},{350,450,450},{450,450,450}};
                drawcurve(a,b,n);
                break;
                }
        case 6: {
                n=6;
                int a[][3]={{250,50,50},{50,50,50},{50,50,150},{150,250,250},{250,250,150},{150,50,50}};
                int b[][3]={{50,50,250},{250,250,350},{350,450,450},{450,450,350},{350,250,250},{250,250,350}};
                drawcurve(a,b,n);
                break;
                }
        case 7: {
                n=2;
                int a[][3]={{50,150,250},{250,150,50}};
                int b[][3]={{50,50,50},{50,250,450}};
                drawcurve(a,b,n);
                break;
                }
        case 8: {//done
                n=8;
                int a[][3]={{50,50,150},{150,250,250},{250,250,150},{150,50,50},{50,50,150},{150,250,250},{250,250,150},{150,50,50}};
                int b[][3]={{150,50,50},{50,50,150},{150,250,250},{250,250,350},{350,450,450},{450,450,350},{350,250,250},{250,250,150}};
                drawcurve(a,b,n);
                break;
                }
        case 9: {
                n=5;
                int a[][3]={{250,250,150},{150,50,50},{50,50,150},{150,250,250},{250,250,250}};
                int b[][3]={{150,50,50},{50,50,150},{150,250,250},{250,250,150},{150,350,450}};
                drawcurve(a,b,n);
                break;
                }
        case 10: {
                n=1;
                int a1[][3]={{30,30,30}};
                int b1[][3]={{30,30,450}};
                drawcurve(a1,b1,n);
                n=4;
                int a[][3]={{150,50,50},{50,50,150},{150,250,250},{250,250,150}};
                int b[][3]={{50,50,250},{250,450,450},{450,450,250},{250,50,50}};
                drawcurve(a,b,n);
                break;
                }
         default : cout<<"wrong number! you can only ask me to draw between 1-10\n";
    }
    cout<<"Do you want to repeat with another number? Press 0 for no and 1 for yes\n";
    cin>>choice;
    cleardevice();
    }while(choice==1);

    cout<<"\nLooks like you want to terminate :( Program ends here!!\n";
    getch();
    closegraph();

return 0;
}
