#include<stdio.h>
#include<malloc.h>
typedef struct linkedlist
{
int  data;
struct  linkedlist* ptr;
}LL;

LL* createnode()
{
LL *node=(LL*)malloc(sizeof(LL));
printf("enter data ");//11
scanf("%d",&node->data);
node->ptr=NULL;
printf("node size ::%d\n",sizeof(node));
return node;
}
//...........................................................
LL *head=NULL;      
//.............................................................
void iatB()
{
if(head==NULL)
{
printf("Empty.. inserting first node by iatB()\n");
LL *mynode=createnode();//
head=mynode; 
//head->ptr=NULL;
printf("inserted successfully first node by iatB()\n");
}
else
{
LL *mynode=createnode();//
mynode->ptr=head; 
head=mynode;
printf("inserted successfully node  %d by iatB()\n",mynode->data);
}
}
//.......................................................
void iatE()
{
if(head==NULL)
{
printf("Empty.. inserting first node by iatE()\n");
LL *mynode=createnode();//
head=mynode; 
//head->ptr=NULL;
printf("inserted successfully first node by iatE()\n");
}
else
{
LL *temp;
temp=head;
do
{
temp=temp->ptr;
}while(temp!=NULL);
LL *mynode=createnode();//
mynode->ptr=temp->ptr;
temp=mynode;
printf("inserted successfully by iatE()\n");
}
}
void iafterSE()
{
if(head==NULL)
{
printf("Empty.. can not perform\n");
}
else
{
int mydata,c=0;
LL *temp;
printf("Enter data value , after which you want to insert  ");
scanf("%d",&mydata);//33
temp=head;
do
{
temp=temp->ptr;
c++;
}while(temp->data!=mydata);
if(c==0){printf("element not present\n");}
else
{
LL *mynode=createnode();//
mynode->ptr=temp->ptr; 
temp->ptr=mynode;
printf("inserted successfully node  %d after %d by iafterSE()\n",mynode->data,temp->data);
}
}
}
void traverse()
{
 LL *temp;
 if(head==NULL){printf("Head->Null\n");}
else
{
temp=head;
printf("Head-> ");
do
{
printf("|%d|%u|-->",temp->data,&(temp->data));
temp=temp->ptr;
}while(temp!=NULL);
printf("NULL\n");
}
}
void dfromB()
{
if(head==NULL){printf("Empty..can not perform delete\n");}
else
{
LL *temp;
temp=head;
printf("Being deleted= %d\n",temp->data);
head=head->ptr;
free(temp);
printf("Deleted successfully\n");
}

}
void dfromE()
{
LL *temp, *prev;
if(head==NULL){printf("Empty..can not perform delete\n");}
else
{
if(head->ptr==NULL)
{
temp=head;
printf("lastwala\n");
free(temp);
printf("lastwala delated successfully\n");
head=NULL;
}
else
{
temp=head;
while(temp->ptr!=NULL)
{
prev=temp;
temp=temp->ptr;
}
prev->ptr=temp->ptr;
printf("Deleted from %u\n",&(temp->data));
free(temp);
printf("Deleted successfully\n");
}
}
}
void dSE()
{
printf("plese wait\n");

}
//................................................................
void main()
{
int choice;
do{
printf("1::iatB() 2::iatE() 3::iafterSE()\n4::traverse() 5::dfromB()6::dfromE() 7:: dSE() 0::exit()\n");
scanf("%d",&choice);
switch(choice)
{
case 1:{iatB();traverse();break;}
case 2:{iatE();traverse();break;}
case 3:{iafterSE();traverse();break;}
case 4:{traverse();break;}
case 5:{dfromB();traverse();break;}
case 6:{dfromE();traverse();break;}
case 7:{dSE();traverse();break;}
}
}while(choice!=0);
}
