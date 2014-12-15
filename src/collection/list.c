/*
 * =====================================================================================
 *
 *       Filename:  list.c
 *
 *    Description:  function define
 *
 *        Version:  1.0
 *        Created:  12/9/2014 21:25:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xuejp (xuejp), xuejp@outlook.com
 *        Company:  simplelive
 *
 * =====================================================================================
 */

#include "list.h"
#include "common.h"
#include <stdlib.h>

struct Node
{
    ElementType Element;
    Position Next;
};

Position Header(List L)
{
	return L;
}

Position First(List L)
{
    return L->Next;
}

Position Advance(Position P)
{
    return P->Next;
}

ElementType Retrieve(Position P)
{
    return P->Element;
}

void Add(ElementType X,List L)
{
	Position tnode=malloc(sizeof(struct Node));	
	if(tnode==NULL)
	{
		FatalError("out of space");
	}
	tnode->Element=X;
	Position P=L->Next;
	while(P->Next !=NULL)
	{
		P=P->Next;
	}
	P->Next=tnode;
}

void Insert(ElementType X,List L,Position P)
{
	Position tnode=malloc(sizeof(struct Node));
	if(tnode==NULL)
	{
		FatalError("out of space");
	}
	tnode->Element=X;
	tnode->Next=P->Next;
	P->Next=tnode;	
}

List MakeEmpty(List L)
{
    return L->Next=NULL;
}

bool IsEmpty(List L)
{
    return L->Next==NULL;
}

bool IsLast(Position P,List L)
{
    return P->Next==NULL;
}

Position Find(ElementType X,List L)
{
	Position P;
	P=L->Next;
	while(P->Next!=NULL && P->Element!=X)
	{
		P=P->Next;
	}
    return P;
}

Position FindPrevious(ElementType X,List L)
{
	Position P=L->Next;
	while(P->Next!=NULL && P->Next->Element!=X)
	{
		P=P->Next;
	}
    return P;
}

void Delete(ElementType X,List L)
{
	Position P=L->Next,tmp;
	if(P=NULL)
	{
		return;
	}
	while(P->Next!=NULL&&P->Next->Element!=X)
	{
		P=P->Next;
	}
	tmp=P->Next->Next;
	free(P->Next);
	P->Next=tmp;
}	

void DeleteList(List L)
{
	Position P=L->Next,tmp;
	L->Next=NULL;
	while(P!=NULL)
	{
		tmp=P->Next;
		free(P);
		P=tmp;
	}
}
