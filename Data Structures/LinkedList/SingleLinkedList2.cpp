/*
    Author - Swati(swati_gwc)
*/
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void push_beg(struct Node** head, int val)
{
    struct Node* newnode = new Node;
    newnode->data = val;

    if(*head == NULL)
    {
        newnode->next = NULL;
        *head = newnode;
        return;
    }

    newnode->next = *head;
    *head = newnode;

}

void push_between(struct Node** head, int prev_value, int val)
{
    struct Node* newnode = new Node;
    newnode->data = val;

    struct Node* temp = *head;

    if(*head == NULL){
        cout<<"List is empty. So we will add "<<val<<" to empty list: \n";
        newnode->next = NULL;
        //cout<<newnode->data;
        *head = newnode;
        return;
    }

    while(temp->data != prev_value && temp!=NULL)
    {
        temp = temp->next;
        if(temp==NULL){
        cout<<" >> This value : " <<prev_value<<" does not exists in list .\n";
        return;
        }
    }



    if(temp->data == prev_value)
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }


}

void push_end(struct Node** head, int val)
{
    struct Node* newnode = new Node;
    newnode->data = val;
    newnode->next = NULL;

    struct Node* last = *head;

    if(*head == NULL)
    {
        *head = newnode;
        return;
    }

    while(last->next!= NULL)
    {
        last = last->next;
    }
    last->next = newnode;
}
void del_node(struct Node **head, int val)
{
    struct Node* temp = NULL, *prev = *head;

    if(*head == NULL){
        cout<<"List is empty, nothing to delete .\n";
        return;
    }

    if(prev!=NULL && prev->data == val)
    {
        *head = prev->next;
        free(prev);
        return;
    }

    while(prev->data!=val &&  prev!=NULL){
        temp = prev;
        prev = prev->next;
        if(prev == NULL)
        {
            cout<<"Value to be deleted not found \n";
            return;
        }

    }

    if(prev == NULL)
    {
        cout<<"Value to be deleted not found \n";
        return;
    }

    if(prev->data == val)
    {
        temp->next = prev->next;
        prev->next = NULL;
        delete prev;
    }
}
void reverse_list(struct Node**head)
{
    struct Node* curr = *head, *next = NULL, *prev = NULL;

    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
}

void print_list(struct Node* n)
{

    if(n== NULL){
        cout<<"The list is empty. \n";
        return;
    }
    cout<<"Currently Linked List is:\n";
    while(n!=NULL)
    {
        cout<<n->data;
        n = n->next;
        if(n!=NULL){cout<<" ->";}
    }
    cout<<endl;
}
int main() {

    //ios_base::sync_with_stdio(false);

    ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r,s, t, u, v, w, x, y, z, maxx, minn;
    a = b = c = d = e = f = g = h = i = j = k = l = m = n = o = p = q = r= s = t = u = v = w = x = y = z = 0;

    struct Node* head = NULL;

    del_node(&head, 3);

    push_beg(&head, 1);
    push_end(&head, 2);
    print_list(head);

    del_node(&head, 3);

    push_between(&head, 1, 3);
    push_between(&head, 2, 3);
    print_list(head);

    del_node(&head, 3);

    push_beg(&head, 5);
    push_between(&head, 5, 8);
    print_list(head);

    push_beg(&head, 95);
    print_list(head);

    push_beg(&head, 4);
    print_list(head);

    push_between(&head, 5, 1);
    print_list(head);

    push_between(&head, 5, 9);
    push_between(&head, 5, 8);
    print_list(head);

    del_node(&head, 7);

    print_list(head);

    reverse_list(&head);
    print_list(head);



return 0;
}
