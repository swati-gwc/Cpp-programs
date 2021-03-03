#include <stdio.h>
#include <stdlib.h>

#define bool int

struct sNode{
    char data;
    struct sNode* next;
};

void push(struct sNode** top, int data);
int pop(struct sNode**top);

bool isMatch(char ch1, char ch2){
    if((ch1=='('&&ch2==')')||(ch1=='['&&ch2==']')||(ch1=='{'&&ch2=='}'))
        return 1;
    else return 0;
}

bool isBalanced(char s[])
{
    int i =0;
    struct sNode * stack = NULL;
    
    while(s[i])
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            push(&stack, s[i]);
        
        if(s[i]==')' || s[i]=='}'|| s[i]==']')
            {
                if(stack==NULL)
                    return 0;
                else if(!isMatch(pop(&stack),s[i]))
                    return 0;
            }
        i++;
    }
    if(stack==NULL)  return 1;
    else return 0;
    
}

int main(){
    char s[100];
    
    printf("Enter a bracket sequence: \n");
    scanf("%[^\n]", &s); 
   
    
    if(isBalanced(s))
        printf("Expression is Balanced.");
    else
        printf("Expression is not balanced.");
    return 0;
}

void push( struct sNode** top, int data)
{
    struct sNode* newnode = (struct sNode*)malloc(sizeof(struct sNode));
    
    if(newnode == NULL){
        printf("Newnode in push function is null\n");
        getchar();
        exit(0);
    }
    
    newnode->data = data;
    newnode->next = (*top);
    
    (*top) = newnode;
}

int pop(struct sNode** top_ref)
{
    char res;
    struct sNode * top;
    
    if(*top_ref == NULL)
    {
        printf("Top is null\n");
        getchar();
        exit(0);
    }
    else{
        top= *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}
