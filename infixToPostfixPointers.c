#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 40

char stack[SIZE];
int top = -1;

int push(char ch)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    else
    {
        top += 1;
        *(stack + top) = ch;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    else
        top -= 1;
}

int precedence(char ch)
{
    switch (ch)
    {
    case '(':
    case ')':
        return 4;
    case '^':
        return 3;
    case '*':
    case '%':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

void infixToPostfix(char *infix, char *postfix)
{
    int i, flag = 0, j;
    push('(');
    strcat(infix, ")");
    for (i = 0; i < strlen(infix); i++)
        if (*(infix + i) == ' ' || *(infix + i) == '\t')
            continue;
        else if (isalnum(*(infix + i)))
            *(postfix + flag++) = *(infix + i);
        else if (*(infix + i) == '(')
            push(*(infix + i));
        else if (*(infix + i) == ')')
        {
            j = top;
            while (*(stack + j) != '(')
            {
                *(postfix + flag++) = *(stack + j--);
                pop();
            }
            if (*(stack + j) == '(')
            {
                pop();
                continue;
            }
        }
        else if (precedence(*(infix + i)) > precedence(*(stack + top)))
            push(*(infix + i));
        else if (precedence(*(infix + i)) < precedence(*(stack + top)))
        {
            while (precedence(*(infix + i)) <= precedence(*(stack + top)) && *(stack + top) != '(')
            {
                *(postfix + flag++) = *(stack + top);
                pop();
            }
            push(*(infix + i));
        }
        else if ((precedence(*(infix + i)) == precedence(*(stack + top))))
        {
            *(postfix + flag++) = *(stack + top);
            pop();
            push(*(infix + i));
        }
    *(postfix + flag) = '\0';
}

int main()
{
    char infix[SIZE], postfix[SIZE];
    printf("Enter an expression :\n");
    gets(infix);
    infixToPostfix(infix, postfix);
    printf("\nPostfix expression : ");
    printf("%s\n", postfix);
    return 0;
}
