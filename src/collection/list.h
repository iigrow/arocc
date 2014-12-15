/*
 * =====================================================================================
 *
 *       Filename:  list.h
 *
 *    Description:  list header
 *
 *        Version:  1.0
 *        Created:  12/9/2014 21:05:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xuejp (xuejp), xuejp@outlook.com
 *        Company:  simplelive
 *
 * =====================================================================================
 */
#include"common.h"

typedef int ElementType;

#ifndef _LIST_H
struct Node;
typedef struct Node *PtrNode;
typedef PtrNode List;
typedef PtrNode Position;

Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);
void Add(ElementType X,List L);
void Insert(ElementType X,List L,Position P);
List MakeEmpty(List L);
bool IsEmpty(List L);
bool IsLast(Position P,List L);
Position Find(ElementType X,List L);
Position FindPrevious(ElementType X,List L);
void Delete(ElementType X,List L);
void DeleteList(List L);

#endif
