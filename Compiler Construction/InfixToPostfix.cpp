#include<bits/stdc++.h>
using namespace std;
char Stack[100];
int top = -1;
void push(char x)
{
    Stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return Stack[top--];
}

int precedence(char p)
{
    /*if(p == '(')
        return 0;
    if(p == '+' || p == '-')
        return 1;
    if(p == '*' || p == '/')
        return 2;
    if(p=='^') return 3;
    return 0;
    */
    switch(p)
    {
        case '(':return 0;
        case '+':
        case '-':
                 return 1;
        case '/':
        case '*':
        case '%':
                 return 2;
        case '^':
                 return 3;
        default :return 0;
    }

}

int main()
{
    //Swati Tripathi
    char infix[100];
    char *s, x;
    printf("Enter the Infix expression : ");
    scanf("%s",infix);
    printf("\n");
    s = infix;

    while(*s != '\0')
    {
        if(isalnum(*s))
            printf("%c ",*s);
        else if(*s == '(')
            push(*s);
        else if(*s == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(precedence(Stack[top]) >= precedence(*s))
                printf("%c ",pop());
            push(*s);
        }
        s++;
    }

    while(top != -1)
    {
        printf("%c ",pop());
    }

    return 0;
}


/**************************************
 OUTPUT
 Enter the Infix expression : A^B+C*D

A B ^ C D * + 

***********************************/
