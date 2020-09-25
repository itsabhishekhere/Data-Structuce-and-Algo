#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q, int x)
{
    q->size = x;
    q->front = q->rear =-1;
    q->Q = (int *)malloc(q->size*sizeof(int*));
}
void enqueue(struct Queue *q, int x)
{
    if(q->rear == q->size-1)
    {
        printf("Queue is Full");
        printf("/n");
    }

    else
    {
        q->rear++;
        q->Q[q->size] = x;
    }
}
int dequeue(struct Queue *q)
{
    int x = -1;
    if(q->front == q->rear)
        printf("Queue is Empty");
    else
        q->front++;
        x=q->Q[q->front];
    return x;

}
void display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
        printf("%d", q.Q[i]);
    printf("/n");
}
int main()
{
    int j;
    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(q);
    return 0;
}
