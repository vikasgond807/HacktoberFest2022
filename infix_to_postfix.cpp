#include <stdio.h>
#include <ctype.h>
char st[500];
int top = -1;

void push(char x)
{
    st[++top] = x;
}

char pop()
{
    return st[top--];
}

int priority(char x)
{
    if (x == '^')
        return 3;
    if (x == '*' || x == '/' || x == '%')
        return 2;
    if (x == '+' || x == '-')
        return 1;
    else
        return 0;
}

int main()
{
    char exp[20];
    int i;
    char *e, x;
    printf("enter the expression");
    scanf("%s", exp);
    fflush(stdin);
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (isalnum(exp[i]))
            printf("%c", exp[i]);
        else if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            while ((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while (priority(st[top]) >= priority(exp[i]))
                printf("%c", pop());
            push(exp[i]);
        }
    }
    while (top > -1)
    {
        printf("%c", pop());
    }
    return 0;
}
