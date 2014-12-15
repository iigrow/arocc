/*
 * =====================================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:  stack
 *
 *        Version:  1.0
 *        Created:  2014年12月11日 23时02分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xuejp (mn), xuejp@outlook.com
 *        Company:  SimpleLove
 *
 * =====================================================================================
 */

#include "common.h"

typedef int ElementType;

#ifndef _Stack_h

struct Node;
typedef struct Node *PtrNode;
typedef PtrNode Stack;

Stack CreateStack();
void Push(ElementType X,Stack S);
void Pop(Stack S);
ElementType Top(Stack S);
void Clear(Stack S);
bool IsEmpty(Stack S);
void Dispose(Stack S);
#endif
