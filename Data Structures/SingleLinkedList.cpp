//Basic operations of single linked list
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

class LinkedList{
    struct Node* head, *newnode;



    void createNode(int data)
    {
        struct Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        newnode = temp;
    }

    void pushdataAtFront(int data){
        createNode(data);
        newnode->next = head;
        head = newnode;
    }

    void pushdataAtLast(int data)
    {
        createNode(data);
        if(head == NULL)
        {
            head = newnode;
        }
        else{
            struct Node* last = head;
            while(last->next!=NULL)
            {
                last=last->next;
            }

            last->next = newnode;
        }
    }

    void pushdataAfterGivenValue(int newdata, int value)
    {
        //here data is value of new node and 'value' is after which new node needs to be entered
        if(head == NULL)
        {
            cout<<"linked list is empty, so we cannot enter after given value"<<endl;
            return;
        }
        int found = 0;
        struct Node* temp = head;
        while(temp!=NULL)
        {
            if(temp->data == value)
            {
                struct Node* copynode ;
                copynode = temp->next;
                createNode(newdata);
                temp->next = newnode;
                newnode->next = copynode;
                found = 1;
            }
            temp = temp->next;
            if(found ==1 ) break;
            /*note if we dont write 'if(found ==1 ) break;' then it will go into infinite loop for input like
            Enter size of linkedList :2
            Enter node values of linkedlist : 1 2
            Linked List: Head --> 1->2->NULL
            Enter after which value you want to enter new node : 2
            What should be data of newnode? : 2
            */

        }
        if(found ==0 ) cout<<"The value after which you want to insert new node does not exists in linkedlist"<<endl;
    }

    void deletenode(int value)
    {
        struct Node* prev, *temp = head;

        if(temp == NULL){
            cout<<"Nothing to delete, LinkedList is empty !"<<endl;
            return;
        }

        if(temp!=NULL && temp->data==value)
        {
            head = temp->next;
            delete temp;
            return;
        }

        while(temp!=NULL && temp->data!=value)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;
    }
    public:
    LinkedList()
    {
        head = NULL;
    }
    void reverseLinkedList()
    {

        if(head==NULL){
            cout<<"LinkedList is empty! I cannot reverse an empty list.\n";
            return;
        }
        struct Node *curr = head, *prev =NULL,*next =NULL;
        //make sure prev is intialized with NULL otherwise last node of reverse linked list will point to random location.
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr =next;
        }
        head = prev;
        printlist();
    }
    void printlist()
    {
        struct Node* temp = head;
        cout<<"Linked List: Head --> ";
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"NULL";
        }
        cout<<endl;
    }

    void takeInputForInserting(int choice){

        int datall, sizell;
        cout<<"Enter size of linkedList :";
        cin>>sizell;

        cout<<"Enter node values of linkedlist : ";
        for(int i=0; i<sizell; i++)
        {
            cin>>datall;
            if(choice==2)
                pushdataAtLast(datall);
            else if(choice==1)
                pushdataAtFront(datall);
        }
        printlist();
    }

    void takeInputForInsertingAfterValue(){

        int datall, nodedata;

        cout<<"Enter after which value you want to enter new node : ";
        cin>>nodedata;
        cout<<"What should be data of newnode? : ";
        cin>>datall;

        pushdataAfterGivenValue(datall,nodedata);

        printlist();

    }

    void takeInputForDeletion()
    {
        int datall;
        cout<<"What value you want to delete from node? :";
        cin>>datall;
        deletenode(datall);
        printlist();
    }


};
int displaymenu()
{
    cout<<endl<<"Choose from following operations :"<<endl;
    cout<<"1. Push Data at front of LinkedList"<<endl;
    cout<<"2. Push Data at end of linkedlist "<<endl;
    cout<<"3. Push Data after given value in linkedlist"<<endl;
    cout<<"4. Delete given value in linkedlist"<<endl;
    cout<<"5. Reverse a linkedlist"<<endl;
    cout<<"6. Display the linkedlist"<<endl;
    cout<<"7. To see the menu and continue again"<<endl<<endl;


}
int main()
{
    LinkedList ll;
    int choice;

    cout<<" >>Author: Swati Tripathi (swati-gwc)"<<endl;
    cout<<"Welcome to Program of LinkedList "<<endl;

    displaymenu();
    cout<<"Enter any number in-between 1 to 7 :"<<endl;
    cin>>choice;
    while(choice>=1 && choice<=7)
    {
        switch(choice){
        case 1:
            ll.takeInputForInserting(1);
            break;
        case 2:
            ll.takeInputForInserting(2);
            break;
        case 3:
            ll.takeInputForInsertingAfterValue();
            break;
        case 4:
            ll.takeInputForDeletion();
            break;
        case 5:
            ll.reverseLinkedList();
            break;
        case 6:
            ll.printlist();
            break;
        case 7:
            displaymenu();
            break;

        default: cout<<"Wrong choice , program ends here. "<<endl;

        }
        cout<<"\n\nDo you want to continue? \nIf yes, choose any value between 1 to 7 again\nor else choose 0 to terminate\nEnter here: ";
        cin>>choice;
    }











    return 0;
}

/*
OUTPUT SAMPLE:

 >>Author: Swati Tripathi (swati-gwc)
Welcome to Program of LinkedList

Choose from following operations :
1. Push Data at front of LinkedList
2. Push Data at end of linkedlist
3. Push Data after given value in linkedlist
4. Delete given value in linkedlist
5. Reverse a linkedlist
6. Display the linkedlist
7. To see the menu and continue again

Enter any number in-between 1 to 7 :
1
Enter size of linkedList :4
Enter node values of linkedlist : 2 4 6 8
Linked List: Head --> 8->6->4->2->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 2
Enter size of linkedList :1
Enter node values of linkedlist : 10
Linked List: Head --> 8->6->4->2->10->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 3
Enter after which value you want to enter new node : 11
What should be data of newnode? : 1
The value after which you want to insert new node does not exists in linkedlist
Linked List: Head --> 8->6->4->2->10->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 3
Enter after which value you want to enter new node : 10
What should be data of newnode? : 12
Linked List: Head --> 8->6->4->2->10->12->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 7

Choose from following operations :
1. Push Data at front of LinkedList
2. Push Data at end of linkedlist
3. Push Data after given value in linkedlist
4. Delete given value in linkedlist
5. Reverse a linkedlist
6. Display the linkedlist
7. To see the menu and continue again



Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 4
What value you want to delete from node? :2
Linked List: Head --> 8->6->4->10->12->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 5
Linked List: Head --> 12->10->4->6->8->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 6
Linked List: Head --> 12->10->4->6->8->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 1
Enter size of linkedList :1
Enter node values of linkedlist : 14
Linked List: Head --> 14->12->10->4->6->8->NULL


Do you want to continue?
If yes, choose any value between 1 to 7 again
or else choose 0 to terminate
Enter here: 0


*/
