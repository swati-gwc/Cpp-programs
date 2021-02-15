#include <graphics.h>
#include<iostream>
# include<math.h>
#include<conio.h>
#include"stdlib.h"
using namespace std;
float input_matrix[3][10];
float Transform[3][3],result[3][10];
int s,i,j,k,midx, midy;

float shearingXY[3][3] = {1,5,0,5,1,0,0,0,1};

void multiply_matrix(float A[3][3], float B[3][10])
{
    for(i=0; i<3; i++)
        for(j=0; j<10; j++)
            result[i][j] = 0;

    for(i=0; i<3; i++)
        for( j=0; j<s; j++)
            for( k=0; k<3; k++)
                result[i][j] += A[i][k]*B[k][j];

    cout<<endl;

    cout<<"Resultant matrix after transformation :\n"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<s; j++)
            {
                cout<<result[i][j]<<" ";
            }
        cout<<endl;
    }
}

void myfunc()
{
    setcolor(WHITE);
    line(0, getmaxy()/2, getmaxx(), getmaxy()/2);
    line(getmaxx()/2, 0, getmaxx()/2, getmaxy());

    setcolor(YELLOW);

    for(i=0;i<s;i++)
    {
        int index;
        if(i+1==s) index=0;
        else index=i+1;
            line(input_matrix[0][i]+midx,midy-input_matrix[1][i],input_matrix[0][index]+midx,midy-input_matrix[1][index]);
    }

    int shx,shy;
    cout<<"Enter Shearing factor:\n";
    cout<<"Shx = ";
    cin>>shx;
    cout<<"Shy = ";
    cin>>shy;

    shearingXY[0][1] = shy;
    shearingXY[1][0] = shx;
    for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                Transform[i][j] = shearingXY[i][j];
    cout<<"\nOutput is shown on second screen";

    multiply_matrix(Transform, input_matrix);


    setcolor(CYAN);

    for(i=0;i<s;i++)
    {
        int index;
        if(i+1==s) index=0;
        else index=i+1;
            line(result[0][i]+midx,midy-result[1][i],result[0][index]+midx,midy-result[1][index]);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int a, b, m;

    //finding the middle point of axis
    midx=getmaxx()/2;
    midy=getmaxy()/2;

    //drawing the axis
    line(midx,0,midx,getmaxy());
    line(0,midy,getmaxx(),midy);

    cout<<"How many sides are there in your polygon?  ";
    cin>>s;
    cout<<"Enter the coordinates of polygon :\n";

    cout<<"Enter x and y value for"<<endl;
    for(i=0; i<s; i++)
     {
         cout<<"point["<<i+1<<"] : ";
          cin>>input_matrix[0][i]>>input_matrix[1][i];
          input_matrix[2][i]=1;
     }


    myfunc();

    getch();
    closegraph();
    return 0;
}
