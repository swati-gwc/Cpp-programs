/*
    Author - Swati(swati_gwc)
*/
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        next= NULL;
    }
};

struct LinkedList{
    Node* head;
    LinkedList(){
        head=NULL;
    }

    void reverselinkedlist(){

        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void printlist()
    {
        struct Node* temp = head;
        while(temp!=NULL)
        {

            cout<<temp->data<<" -> ";
            temp= temp->next;
        }
        if(temp==NULL)
            cout<<" NULL ";
        cout<<endl;
    }

    void pushdata(int data)
    {

        struct Node* temp = new Node(data);
        temp->next = head;
        head = temp;

    }
};
int main() {

    LinkedList ll;
   // ll.pushdata(1);
    //ll.pushdata(2);
    //ll.pushdata(3);

    int sizeOfList,listdata;

    cout<<"Reverse Linked List Program\n\n";

    cout<<"How many elements you want in Linked List? (range allowed [1-100]) : ";
    cin>>sizeOfList;

    cout<<"Enter "<<sizeOfList<<" datas into list : ";
    for(int i=0; i<sizeOfList; i++)
    {
        cin>>listdata;
        ll.pushdata(listdata);
    }


    cout<<"Linked List you created :"<<endl;
    ll.printlist();

    ll.reverselinkedlist();

    cout<<"Reversed Linked List :"<<endl;
    ll.printlist();




return 0;
}

/*SAMPLE OUTPUT:

Reverse Linked List Program

How many elements you want in Linked List? (range allowed [1-100]) : 5
Enter 5 datas into list : 1 2 3 4 5
Linked List you created :
5 -> 4 -> 3 -> 2 -> 1 ->  NULL
Reversed Linked List :
1 -> 2 -> 3 -> 4 -> 5 ->  NULL
*/
