#include <stdio.h>
#include <stdlib.h>
#include "./chain.h"

//初始化栈，即头结点。
void InitStack(LinkStack *S)
{
    LinkStackPtr head = malloc(sizeof(StackNode));
    head->data = -1;
    head->next = NULL;

    S->top = head;
    S->count = 0;

    return;
}

//压栈
void Push(LinkStack *S, int e)
{
    LinkStackPtr new = malloc(sizeof(StackNode));
    new->data = e;
    new->next = NULL;

    //新结点指向栈顶的结点
    new->next = S->top;

    //更新栈顶指针
    S->top = new;
    S->count ++;

    return;
}

int StackEmpty(LinkStack S)
{
    return (S.top)->next == NULL ? 1 : 0;
}

//出栈
void Pop(LinkStack *S, int *e)
{
    LinkStackPtr del;

    if(StackEmpty(*S))
    {
        printf("Stack is empty!\n");

        return;
    }

    //保存栈顶元素地址，即出栈元素。
    del = S->top;

    *e = del->data;

    //更新栈顶指针
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

