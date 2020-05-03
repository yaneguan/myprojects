#include <stdio.h>
#include <stdlib.h>
#include "./chain.h"


void InitStack(LinkStack *S)
{
    LinkStackPtr head = malloc(sizeof(StackNode));
    head->data = -1;
    head->next = NULL;

    S->top = head;
    S->count = 0;

    return;
}


void Push(LinkStack *S, int e)
{
    LinkStackPtr new = malloc(sizeof(StackNode));
    new->data = e;
    new->next = NULL;
    new->next = S->top;
    S->top = new;
    S->count ++;

    return;
}

int StackEmpty(LinkStack S)
{
    return (S.top)->next == NULL ? 1 : 0;
}


void Pop(LinkStack *S, int *e)
{
    LinkStackPtr del;

    if(StackEmpty(*S))
    {
        printf("Stack is empty!\n");

        return;
    }
    del = S->top;

    *e = del->data;
    S->top = del->next;

    free(del);

    S->count --;

    return;
}

void GetTop(LinkStack S, int *e)
{
    if(StackEmpty(S))
    {
        printf("Stack is empty!\n");

        return;
    }

    *e = S.top->data;

    return;
}

int StackLength(LinkStack S)
{
    return S.count;
}

