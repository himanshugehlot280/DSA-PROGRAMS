#include<stdio.h>
#define SIZE 5
int top=-1;
int i,element,temp;
int stack[SIZE];
//..............................................................................
void push()
{
if(top==SIZE-1)
{
    printf("OVERFLOW..cann not push()\n");
}
else
{
if(top==-1)
{
    printf("UNDERFLOW..pushing FIRST element\n");
    printf("Enter element ");
    scanf("%d",&element);//11
               top=top+1;
                stack[top]=element;
    printf("FIRST element pushed successfully\n");
}
else
{
    printf("Enter element ");
    scanf("%d",&element);//22 33 44 55
               top=top+1;
                stack[top]=element;
    printf("Element pushed successfully\n");
}
}
}
void pop()
{
if(top==-1)
{
printf("UNDERFLOW.. can not pop\n");
}
else
{
if(top==0)
{
printf("LAST one element is getting to pop =%d\n",stack[top]);
top=top-1;
printf("popped successfully\n");
}
else
{
printf("element is getting to popped =%d\n",stack[top]);
top=top-1;
printf("popped successfully\n");
}
}
}
void traverse()
{
if(top==-1)
{
    printf("UNDERFLOW..cann not traverse\n");
}
else
{
for(temp=top;temp>=0;temp--)
{
printf("|%d|\n",stack[temp]);
}
}
}
void peek()
{
if(top==-1)
{
    printf("UNDERFLOW..\n");
}
else
{
printf("current element on top =%d\n",stack[top]);
}
}
void main()
{
int choice;
do{
printf("1::push() 2::pop() 3::traverse() 4::peek() 0::exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:{push();traverse();break;}
case 2:{pop();traverse();break;}
case 3:{traverse();break;}
case 4:{peek();break;}
}
}while(choice!=0);
}
