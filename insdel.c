#include<stdio.h>
#define SIZE 5
int currentpos;
int indexx=-1,element;
int arr[SIZE];
//..............................................................................
void insert()
{
if(indexx==SIZE-1)
{
    printf("FULL..cann not insert\n");
}
else
{
if(indexx==-1)
{
    printf("EMPTY..inserting FIRST element\n");
    printf("Enter element ");
    scanf("%d",&element);//11
               indexx=indexx+1;
                arr[indexx]=element;
    printf("FIRST element inserted successfully\n");
                
}
else
{
    printf("Enter element ");
    scanf("%d",&element);//22 33 44 55
               indexx=indexx+1;
                arr[indexx]=element;
    printf("Element inserted successfully\n");
}
}
}
void delete()
{
if(indexx==-1)
{
printf("EMPTY.. can not delete\n");
}
else
{
if(indexx==0)
{
printf("LAST one element is getting to delete =%d\n",arr[indexx]);
indexx=indexx-1;
printf("Deleted successfully\n");
}
else
{
printf("element is getting to delete =%d\n",arr[indexx]);
indexx=indexx-1;
printf("Deleted successfully\n");
}
}
}
void search()
{
printf("plz wait\n");
}
void update()
{
printf("plz wait\n");
}
void traverse()
{
int t;
if(indexx==-1)
{
    printf("EMPTY..cann not traverse\n");
}
else
{
for(t=0;t<=indexx;t++)
{
printf("%d ",arr[t]);
}
printf("\n");

}
}

void main()
{
int choice;
do{
printf("1::Insert() 2::delete() 3::search() 4::Update() 5::traverse() 0::exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:{insert();traverse();break;}
case 2:{delete();traverse();break;}
case 3:{search();break;}
case 4:{update();traverse();break;}
case 5:{traverse();break;}
}
}while(choice!=0);
}
