/*
 * =====================================================================================
 *
 *       Filename:  queue.c
 *
 *    Description:  queue
 *
 *        Version:  1.0
 *        Created:  2014年12月16日 22时56分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xuejp (mn), xuejp@outlook.com
 *        Company:  SimpleLove
 *
 * =====================================================================================
 */

#include "queue.h"
#include "common.h"

#define MinQueueSize 5

struct QueueRecord
{
    int Capacity;
    int Front;
    int Rear;
    int Size;
    ElementType *Array;
};

bool IsEmpty(Queue Q)
{
    return Q->Size==0;
}

bool IsFull(Queue Q)
{
    return Q->Size==Q->Capacity;
}

Queue CreateQueue(int MaxElements)
{
    Queue Q;
    if(MaxElements<MinQueueSize)
    {
        FatalError("Queue size is too small");
    }
    Q=malloc(sizeof(struct QueueRecord));
    if(Q==NULL)
    {
        FatalError("Out of space");
    }
    Q->Array=malloc(sizeof(ElementType) * MaxElements);
    if(Q->Array==NULL)
    {
        FatalError("Out of space");
    }
    Q->Capacity=MaxElements;
    MakeEmpty(Q);
    return Q;
}

void DisposeQueue(Queue Q)
{
    if(Q!=NULL)
    {
        free(Q->Array);
        free(Q);
    }
}

void MakeEmpty(Queue Q)
{
    Q->Size=0;
    Q->Front=1;
    Q->Rear=0;
}

void Enqueue(ElementType X,Queue Q)
{
    if(IsFull(0))
    {
        FatalError("Full queue");
    }
    else
    {
        Q->Size++;
        int value=++Q->Rear;
        Q->Rear=value==Q->Capacity?0:value;
        Q->Array[Q->Rear]=X;
    }
}

ElementType Front(Queue Q)
{
    if(IsEmpty(Q))
    {
        FatalError("Empty queue");
    }
    else
    {
        Q->Size--;
        int value=++Q->Front;
        Q->Front=value==Q->Capacity?0:value;
    }
}

ElementType FrontAndDequeue(Queue Q)
{
    ElementType X=0;

    if(IsEmpty(Q))
    {
        FatalError("Empty queue");
    }
    else
    {
        Q->Size--;
        X=Q->Array[Q->Front];
        int value=++Q->Front;
        Q->Front=value==Q->Capacity?0:value;
    }
    return X;
}
