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

//InitStack(*S);
void InitStack(LinkStack *S);

//DestroyStack(*S);
//ClearStack(*S);

//StackEmpty(S);
int StackEmpty(LinkStack S);

//GetTop(S, *e);
void GetTop(LinkStack S, int *e);

//Push(*S, e);
void Push(LinkStack *S, int e);

//Pop(*S, *e);
void Pop(LinkStack *S, int *e);

//StackLength(S);
int StackLength(LinkStack S);

#endif
