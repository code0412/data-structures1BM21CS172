#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;

}

int main()
{
    char exp[100];
    char *r, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    r= exp;

    while(*r != '\0')
    {
        if(isalnum(*r))
            printf("%c ",*r);
        else if(*r == '(')
            push(*r);
        else if(*r == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*r))
                printf("%c ",pop());
            push(*r);
        }
        r++;
    }

    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}
