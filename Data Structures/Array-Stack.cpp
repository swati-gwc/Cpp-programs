#include <iostream>

using namespace std;
const int size = 50;
int Push(int Stack[], int &top, int ele)
{
    if(top==size-1) return -1;
    else{
        top++;
        Stack[top] = ele;

    }
    return 0;
}
int Pop(int Stack[], int &top)
{
    int ret;
    if(top==-1) return -1;
    else{
        ret = Stack[top];
        top--;
    }
    return ret;
}
void Display(int Stack[],int top)
{
    if(top==-1) return ;
    else{
        cout<<Stack[top]<<"--"<<endl;
        for(int i = top -1; i>=0; i--)
            cout<<Stack[i]<<endl;
    }
}
int main()
{
    int Stack[size], item,res, top=-1;

    char ch = 'y';
    while(ch == 'y' || ch=='Y')
    {
        cout<<"\n Enter ITEM for insertion"<<endl;
        cin>>item;
        res = Push(Stack,top,item);
        if(res == -1)
        {
            cout<<"OVERFLOW ABORTING "<<endl;
            exit(1);
        }
        cout<<"\n The Stack is now "<<endl;
        Display(Stack, top);
        cout<<"Want to insert more elements ?"<<endl;
        cin>>ch;
    }
    cout<<"Now deletion of elements begins "<<endl;
    ch = 'y';
    while(ch = 'y' || ch == 'Y')
    {
        res = Pop(Stack, top);
        if(res ==-1)
        {

            cout<<"UNDERFLOW !!"<<endl;
            exit(1);
        }
        else{
            cout<<"\n Element deleted is : "<<res<<endl;
            cout<<"\The stack now is : "<<endl;
            Display(Stack,top);
        }
        cout<<"Want to delete more elements? (y/n)"<<endl;
        cin>>ch;
    }
    return 0;
}
