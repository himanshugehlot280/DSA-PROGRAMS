#include<stdio.h>
#define SIZE 5
int front=-1,rear=-1;
int i,element,temp;
int CQ[SIZE];
//..............................................................................
int isEmpty()
{
if ((front==-1)&&(rear==-1))
{
return 1;
}
return 0;
}
//.................................................................................
int isFull()
{
if (((rear-front)==(SIZE-1))||(rear==front-1))
{
return 1;
}
return 0;
}
//..............................................................
void enqueue()
{
if(isFull())
{
printf("full..can not perform enqueue operation\n");
}
else
{
if(isEmpty())
{
printf("EMPTY....enquueing the FIRST element ");
scanf("%d",&element);
front=0;
rear=0;
CQ[rear]=element;
printf("FIRST element enqueued successfully\n");
printf("front=%d & rear=%d\n",front,rear);
}
else
{
printf("enter element ");
scanf("%d",&element);
rear=(rear+1)%SIZE;
CQ[rear]=element;
printf("element enqueued successfully\n");
printf("front=%d & rear=%d\n",front,rear);
}
}
}
void dequeue()
{
if(isEmpty())
{
printf("Empty...can not perform dequeue operation\n");
printf("front=%d & rear=%d\n",front,rear);
}
else
{
if(front==rear)//00 11 22 33 44
{
printf("LastWala being dequeued = %d\n",CQ[front]);
front=-1;
rear=-1;
printf("Dequeued successfully\n");
printf("front=%d & rear=%d\n",front,rear);
}
else
{
printf("being dequeued = %d\n",CQ[front]);
front=(front+1)%SIZE;
printf("Dequeued successfully\n");
printf("front=%d & rear=%d\n",front,rear);
}
}
}
void traverse()
{
if(isEmpty())
{
printf("Empty..can not traverse\n");
printf("front=%d & rear=%d\n",front,rear);
}
else
{
temp=front;
do
{
printf("%d ",CQ[temp]);
temp++;
}while(temp<=rear);
printf("\n");
printf("front=%d & rear=%d\n",front,rear);
}
}
void main()
{
int choice;
do{
printf("1::enqueue() 2::dequeue() 3::traverse() 0::exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:{enqueue();traverse();break;}
case 2:{dequeue();traverse();break;}
case 3:{traverse();break;}
}
}while(choice!=0);
}
