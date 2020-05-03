#ifndef __CHAIN_H__
#define __CHAIN_H__

typedef int SElemType;
typedef struct StackNode
{
    SElemType data;
    
    struct StackNode *next;

}StackNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;

}LinkStack;


void InitStack(LinkStack *S);


int StackEmpty(LinkStack S);


void GetTop(LinkStack S, int *e);


void Push(LinkStack *S, int e);

void Pop(LinkStack *S, int *e);


int StackLength(LinkStack S);

#endif
