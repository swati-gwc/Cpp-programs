#include <iostream>

using namespace std;
const int size = 50;
int Queue[size], front = -1, rear = -1;
int Insert(int Queue[],int ele)
{
    if(rear==size-1) return -1;
    else if(rear == -1){
       front = rear = 0;
       Queue[rear] = ele;

    }
    else{
        rear++;
        Queue[rear] = ele;

    }
    return 0;
}
int Remove(int Queue[])
{
    int ret;
    if(front==-1) return -1;
    else{
        ret = Queue[front];
        if(front == rear) front = rear =-1;
        else front++;
    }
    return ret;
}
void Display(int Queue[], int front, int rear)
{
    if(front==-1) return ;
    else{

        for(int i = front; i<rear; i++)
            cout<<Queue[i]<<" ";
        cout<<Queue[rear]<<endl;
    }
}
int main()
{
    int item,res, top=-1;

    char ch = 'y';
    while(ch == 'y' || ch=='Y')
    {
        cout<<"\n Enter ITEM for insertion"<<endl;
        cin>>item;
        res = Insert(Queue, item);
        if(res == -1)
        {
            cout<<"OVERFLOW ABORTING "<<endl;
            exit(1);
        }
        cout<<"\n The Queue is now "<<endl;
        Display(Queue, front, rear);
        cout<<"Want to insert more elements ?"<<endl;
        cin>>ch;
    }
    cout<<"Now deletion of elements begins "<<endl;
    ch = 'y';
    while(ch = 'y' || ch == 'Y')
    {
        res = Remove(Queue);
        if(res ==-1)
        {

            cout<<"UNDERFLOW !!"<<endl;
            exit(1);
        }
        else{
            cout<<"\n Element deleted is : "<<res<<endl;
            cout<<"\The queue now is : "<<endl;
            Display(Queue, front, rear);
        }
        cout<<"Want to delete more elements? (y/n)"<<endl;
        cin>>ch;
    }
    return 0;
}
