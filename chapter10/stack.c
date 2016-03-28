/*
 * name: stack.c
 * purpose: 匹配括号
 * author: babes young
 */

#include <stdio.h>
#include <stdbool.h>

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
bool is_matched(void);

int main(void)
{
    printf("enter parentheses and/or braces:\n");
    make_empty();

    if (is_matched()) {
        printf("parentheses/braces are nested properly\n");
    } else {
        printf("parentheses/braces aren't nested properly\n");
    }

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

bool is_matched(void)
{
    char ch = getchar();
    while (ch != '\n') {
        if (ch == '{' || ch == '(') {
            push(ch);
            ch = getchar();
        } else if (ch == '}') {
            if (pop() != '{') {
                return false;
            } else {
                ch = getchar();
            }
        } else if (ch == ')') {
            if (pop() != '(') {
                return false;
            } else {
                ch = getchar();
            }
        }
    }

    if (!is_empty()) {
        return false;
    } else {
        return true;
    }
}
