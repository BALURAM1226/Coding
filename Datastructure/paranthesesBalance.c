#include<stdio.h>
int tos=-1;
char stack[100];
void push(char c)
{
    stack[++tos] = c;
}
char pop()
{
    return stack[tos--];
}
char peek()
{
    return stack[tos];
}
void  balance(char* exp)
{
    int i=0;
    while(exp[i]!='\0')
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(exp[i]);
        else if(exp[i] == ')' && peek() == '(')
            pop();
        else if(exp[i] == ']' && peek() == '[')
            pop();
        else if(exp[i] == '}' && peek() == '{')
            pop();
            i++;
     }

    if(tos==-1)
        printf("\nBalanced");
    else
        printf("\nNot balanced");
}
main()
{
    char exp[100];
    printf("\nEnter the parentheses: ");
    scanf("%[^\n]", exp);
    printf("\parentheses: %s", exp);
    balance(exp);
}
