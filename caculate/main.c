#include <stdio.h>
#include "./chain.h"

int main(int argc, const char *argv[])
{
    char expr[100];
    LinkStack OpdStack, OptStack;

    InitStack(&OpdStack);
    InitStack(&OptStack);

    InputExpr(expr);

    OutputExpr(expr);
    
    ComputeExpr(&OpdStack, &OptStack, expr);

    return 0;
}
