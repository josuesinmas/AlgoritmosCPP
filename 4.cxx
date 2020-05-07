#include "stdio.h"
#include "string.h"
#include "iostream"
#include "conio.h"


char stack[25];
int top = -1;

void push(char objeto)
{
    stack[++top] = objeto;
}
char pop()
{
    return stack[top--];
}

int precedence(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
        return 2;
        break;
    case '*':
    case '/':
        return 3;
        break;
    case '^':
        return 4;
        break;
    case '(':
    case ')':
    case '#':
        return 1;
        break;
    }
}
int isOperator(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
    case '(':
    case ')':
        return 1;
        break;
    default:
        return 0;
    }
}
void covert(char infix[], char postfix[])
{
    int i, symbol, j = 0;
    stack[++top] = '#';

    for (int i = 0; i < strlen(infix); i++)
    {
        if (isOperator(symbol) == 0)
        {
            postfix[j] = symbol;
            j++;
        }
        else
        {
            if (symbol == '(')
            {
                push(symbol);
            }
            else
            {
                if (symbol == ')')
                {
                    while (stack[top] != '(')
                    {
                        postfix[j] = pop();
                        j++;
                    }
                    pop();
                }
                else
                {
                    if (precedence(symbol) > precedence(stack[top]))
                    {
                        push(symbol);
                    }
                    else
                    {
                        while (precedence(symbol) <= precedence(stack[top]))
                        {
                            postfix[j] = pop();
                            j++;
                        }
                        push(symbol);
                    }
                }
            }
        }
    }
    while (stack[top] != '#')
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
}
int stack_int[25];
int top_int = -1;

void push_int(int objeto)
{
    stack_int[++top_int] = objeto;
}
char pop_int()
{
    return stack_int[top_int--];
}
bool isdigit(char digito){
    if (kbhit)!true,false;
}
int evaluate(char *postfix)
{
    char ch;
    int i = 0, operand1, operand2;
    while ((ch = postfix[i++] != '\0'))
    {
        if (isdigit(ch))
        {
            push_int(ch - '0');
        }
        else
        {
            operand2 = pop_int();
            operand1 = pop_int();

            switch (ch)
            {
            case '+':
                push_int(operand1 + operand2);
                break;
            case '-':
                push_int(operand1 - operand2);
                break;
            case '*':
                push_int(operand1 * operand2);
                break;
            case '/':
                push_int(operand1 / operand2);
                break;
            }
        }
    }
    return stack_int[top_int];
}
void ejecucion()
{
    char infix[25] = "1*(2+3)", postfix[25];
    covert(infix, postfix);

    printf("infix exprssion is: %s\n", infix);
    printf("postfix exprssion is: %s\n", postfix);
    printf("evaluated exprssion is: %s\n", evaluate(postfix));

}
int main(){
    int x;
    ejecucion();
    
    return 0;
}