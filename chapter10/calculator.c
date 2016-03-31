/*
 * name: calculator.c
 * purpose: Reverse Polish Notation calculator
 * author: babes young
 */


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void stack_overflow(void);
void stack_underflow(void);
void push(char);
char pop(void);
int calculator(void);

int main(void)
{
    make_empty();
    int result = calculator();
    printf("value of expression: %d\n", result);

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow(void)
{
    printf("error, stack overflow\n");
}

void stack_underflow(void)
{
    printf("error, stack underflow\n");
}

void push(char ch)
{
    if (is_full()) {
        stack_overflow();
    } else {
        contents[top++] = ch;
    }
}

char pop(void)
{
    if (is_empty()) {
        stack_underflow();
    } else {
       return contents[--top];
    }
}

int calculator(void)
{
    char operand_1, operand_2, result;
    printf("enter an RPN expression:\n");
    char ch = getchar();
    while (ch != '\n') {
        if (ch > '0' && ch < '9') {
            push(ch);
            while ((ch = getchar()) == ' ') {
                ;
            }
        } else if (ch == '*' || ch == '+' || ch == '-' || ch == '/'){
            operand_1 = pop() - 48;
            operand_2 = pop() - 48;
            switch (ch) {
                case '*':
                    result = operand_1 * operand_2;
                    push(result);
                    break;
                case '/':
                    result = operand_1 / operand_2;
                    push(result);
                    break;
                case '+':
                    result = operand_1 + operand_2;
                    push(result);
                    break;
                case '-':
                    result = operand_1 - operand_2;
                    push(result);
                    break;
            }
            while ((ch = getchar()) == ' ') {
                ;
            }
        } else if (ch == '=') {
            break;
        } else {
            exit(0);
        }
    }

    int outcome = (int) pop();
    return outcome;
}
