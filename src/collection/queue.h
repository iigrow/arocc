/*
 * =====================================================================================
 *
 *       Filename:  queue.h
 *
 *    Description:  queue
 *
 *        Version:  1.0
 *        Created:  2014年12月16日 22时47分15秒
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

#ifndef _Queue_h

struct QueueRecord;
typedef struct QueueRecord *Queue;

bool IsEmpty(Queue Q);
bool IsFull(Queue Q);
Queue CreateQueue(int MaxElements);
void DisposeQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(ElementType X,Queue Q);
ElementType Front(Queue Q);
void Dequeue(Queue Q);
ElementType FrontAndDequeue(Queue Q);

#endif
