#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList{

public:
    struct Node* head;
    LinkedList(){
        head= NULL;
    }

    void pushdata(int data){
        struct Node* temp = new Node(data);
        temp->next = head;
        head= temp;
    }

    void printlist()
    {
        cout<<"LinkedList : Head --> ";
        struct Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        if(temp == NULL)
            cout<<"NULL";
        cout<<endl;
    }

    void reverseList()
    {
        struct Node *curr = head, *prev = NULL, *next = NULL;

        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head= prev;
    }
};

int main()
{

    LinkedList ll;

    int datall, sizell;

    cout<<"Enter size of linkedList : ";
    cin>>sizell;

    cout<<"\nEnter data of nodes in LinkedList"<<endl;

    for(int i=0; i<sizell; i++)
    {

        cin>>datall;
        ll.pushdata(datall);
    }

    ll.printlist();
    ll.reverseList();
    ll.printlist();
}
/*
Output:
Enter size of linkedList : 5

Enter data of nodes in LinkedList
1 2 3 4 5
LinkedList : Head --> 5->4->3->2->1->NULL
LinkedList : Head --> 1->2->3->4->5->NULL
*/
