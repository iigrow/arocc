/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:  stack
 *
 *        Version:  1.0
 *        Created:  2014年12月11日 23时08分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xuejp (mn), xuejp@outlook.com
 *        Company:  SimpleLove
 *
 * =====================================================================================
 */

#include<stdlib.h>
#include "common.h"
#include "stack.h"

struct Node
{
    ElementType Element;
    PtrNode Next;
};

Stack CreateStack()
{
    Stack S=malloc(sizeof(struct Node));
    if(S==NULL)
    {
        FatalError("Out of space");
    }

    S->Next=NULL;
    Clear(S);
    return S;
}

void Push(ElementType X,Stack S)
{
    PtrNode cell=malloc(sizeof(struct Node));
    if(cell==NULL)
    {
        FatalError("OUt of space");
    }
    else
    {
        cell->Element=X;
        cell->Next=S->Next;
        S->Next=cell;
    }
}

void Pop(Stack S)
{
    if(IsEmpty(S))
    {
        return;
    }
    PtrNode fcell=S->Next;
    S->Next=S->Next->Next;
    free(fcell);
}

ElementType Top(Stack S)
{
    if(IsEmpty(S))
    {
        return -1;
    }
    return S->Next->Element;
}

void Clear(Stack S)
{
    while(!IsEmpty(S))
    {
        Pop(S);
    }
}

bool IsEmpty(Stack S)
{
    return S->Next==NULL;
}

void Dispose(Stack S)
{
    Clear(S);
    free(S);
}
