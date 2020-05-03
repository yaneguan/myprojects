#include <stdio.h>
#include "./chain.h"

void InputExpr(char *expr)
{
    //从键盘输入表达式
    printf("Input Express: ");
    //scanf("%s", expr);
    gets(expr);

    return;
}


void OutputExpr(char *expr)
{
    //输出字符串表达式
    printf("Output Express: ");
    puts(expr);

    printf("\n");

    return;
}

int ConvertCharToNumber(char **wp)
{
    int num = 0;

    //把字符数字转为普通的数
    while(**wp >= '0' && **wp <= '9')
    {
        num = num * 10 + **wp - '0';
        
        //segmentation fault (core dumped)
        //*wp ++; //<=> *wp; wp = wp + 1

        (*wp) ++; //<=> *wp; *wp = *wp + 1
    }
    
    //打印转换后的数
    printf("num: %d\n", num);

    return num;
}

int GetPriority(char opt)
{
    int level;

    switch(opt)
    {
        case '(':
            level = 0;
            break;

        case '+':
        case '-':
            level = 1;
            break;

        case '*':
        case '/':
            level = 2;
            break;
    }

    return level;
}

void CalculatePart(LinkStack *OpdStack, char opt)
{
    int opd1, opd2;
    int result;

    //把操作数出栈
    Pop(OpdStack, &opd2);
    Pop(OpdStack, &opd1);

    //看需要进行什么运算
    switch(opt)
    {
        case '+':
            result = opd1 + opd2; 
            break;
        case '-':
            result = opd1 - opd2; 
            break;
        case '*':
            result = opd1 * opd2; 
            break;
        case '/':
            result = opd1 / opd2; 
            break;
    }
    
    //把计算得到的结果入栈
    Push(OpdStack, result);

    return;
}

void HandleOperator(LinkStack *OpdStack, LinkStack *OptStack, char opt)
{
    char opt_top;
    int TopPriority;
    int CurPriority;
#if 0
    while(1)
    {

        //得到当前运算符的优先级
        CurPriority = GetPriority(opt);
        printf("CurPriority: %d\n", CurPriority); //'-': 1

        //如果运算符栈为空，直接入栈。
        if(StackEmpty(*OptStack))
        {
            Push(OptStack, opt);
            
            break;
        }
        //不为空就要比较优先级
        else
        {
            //得到栈顶元素，得到优先级
            Pop(OptStack, (int *)&opt_top);
            TopPriority = GetPriority(opt_top);
            printf("TopPriority: %d\n", TopPriority); //'*': 2

            //当前的优先级大于栈顶的优先级，就把运算符全入栈。
            if(CurPriority > TopPriority)
            {
                Push(OptStack, opt_top);
                Push(OptStack, opt);

                break;
            }
            else
            {
                //计算部分
                CalculatePart(OpdStack, opt_top);
            }

        }
    }
#endif

#if 1
    while(1)
    {

        //得到当前运算符的优先级
        CurPriority = GetPriority(opt);
        printf("CurPriority: %d\n", CurPriority); //'-': 1
        
        //得到栈顶元素，得到优先级
        //Pop(OptStack, (int *)&opt_top);
        GetTop(*OptStack, (int *)&opt_top);
        TopPriority = GetPriority(opt_top);
        printf("TopPriority: %d\n", TopPriority); //'*': 2

        //如果运算符栈为空，直接入栈。
        //当前的优先级大于栈顶的优先级，就把运算符全入栈。
        if(StackEmpty(*OptStack) || CurPriority > TopPriority)
        {
            Push(OptStack, opt);
            
            break;
        }
        //不为空就要比较优先级
        else
        {
            Pop(OptStack, (int *)&opt_top);
            //计算部分
            CalculatePart(OpdStack, opt_top);
        }
    }
#endif

    return;
}

void HandleBracketPair(LinkStack *OpdStack, LinkStack *OptStack)
{
    //int opd1, opd2;
    char opt;

    //Pop(OpdStack, &opd2);
    //Pop(OpdStack, &opd1);
    
    //把括号内的运算符全部计算完
    while(1)
    {
        Pop(OptStack, (int *)&opt);

        if(opt == '(')
        {
            Push(OptStack, opt);
            break;
        }
        
        CalculatePart(OpdStack, opt);
    }
    return;
}

void ComputeExpr(LinkStack *OpdStack, LinkStack *OptStack, char *expr)
{
    //工作指针
    char *wp = expr;
    int oprand;
    char operator;

    //遍历表达式字符串
    while(*wp != '\0')
    {
       //遇到空格就跳过
       if(*wp == ' ')
       {    
            wp ++;

            continue;
       }

       //判断是否是字符数字
       if(*wp >= '0' && *wp <= '9')
       {
            //把字符数字转为普通的数
            oprand = ConvertCharToNumber(&wp);

            //把操作数入栈
            Push(OpdStack, oprand);

            continue;
       }

       //判断是否是运算符号
       if(*wp == '+' || *wp == '-' || *wp == '*' || *wp == '/')
       {
            //处理运算符
            HandleOperator(OpdStack, OptStack, *wp);

            wp ++;
            continue;
       }

       //如果是'('直接入栈
       if(*wp == '(')
       {
            Push(OptStack, *wp);
            
            wp ++;
            continue;
       }

       if(*wp == ')')
       {
            //处理括号对
            HandleBracketPair(OpdStack, OptStack);

            wp ++;

            Pop(OptStack, (int *)&operator);
            printf("operator: %c\n", operator);
            continue;
       }

    }
    
    while(!StackEmpty(*OptStack))
    {
        //把运算符出栈
        Pop(OptStack, (int *)&operator);
        //计算部分的值
        CalculatePart(OpdStack, operator);
    }
    //把最后的数出栈，得到结果。
    Pop(OpdStack, &oprand);

    printf("result: %d\n", oprand);

    return;
}
