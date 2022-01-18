// THIS PROGRAM CONSIST OF ALL THE OPERATIONS OF ARRAY IN C LANGUAGE
#include<stdio.h>
#define SIZE 5
int currentpos;
int i,temp,newtemp,indexx=-1,element,myelement,newelement;
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
int flag=0,i;
if(indexx==-1)
{
printf("Empty..can not perform searching\n");
}
else
{
printf("Enter element to search ");
scanf("%d",&myelement);//33   or 100
for(i=0;i<=indexx;i++)
{
if(arr[i]==myelement)
{
printf("found  on = %d\n",i+1);
flag++;
}
}
if(flag==0){printf("not present\n");}
}
}

void update()
{

int flag=0;
if(indexx==-1)
{
printf("Empty..can not perform update\n");
}
else
{
printf("Enter element to update ");
scanf("%d",&myelement);//33   or 100
for(i=0;i<=indexx;i++)
{
if(arr[i]==myelement)
{
printf("Enter new value ");
scanf("%d",&newelement);//300
arr[i]=newelement;
printf("Updated successfully\n");
flag++;
}
}
if(flag==0){printf("not present..can not perform update\n");}
}
}
void traverse()
{
if(indexx==-1)
{
    printf("EMPTY..cann not traverse\n");
}
else
{
for(temp=0;temp<=indexx;temp++)
{
printf("%d ",arr[temp]);
}
printf("\n");

}
}

void iafterSP()
{
if(indexx==SIZE-1)
{
    printf("FULL..cann not insert after special position \n");
}
else
{
if(indexx==-1)
{
    printf("EMPTY..can not perform\n");
                
}
else
{
    printf("Enter position,after which you want to insert ");
    scanf("%d",&temp);//2
    if(temp>indexx)
    {
    printf("prior elements are absent.. use insert() for them\n");
    }
    else
    {
       printf("enter element  ");
       scanf("%d",&element);//200
       for(i=indexx;i>=temp;i--)
       {
       arr[i+1]=arr[i];
       }
       arr[temp]=element;//200
       indexx=indexx+1;
    printf("Inserted successfully\n");
    }
}
}
}


void dfromSP()
{
if(indexx==-1)
{
    printf("EMPTY..can not perform\n");
}
else
{
   printf("Enter position, from which you want to delete ");
    scanf("%d",&temp);//2
    newtemp=temp-1;
    if(newtemp>indexx)//11[0] 55[1] 
    {
    printf("can not perform\n");
    }
    else
    {
       for(i=newtemp;i<=indexx;i++)
       {
       arr[i]=arr[i+1];
       }
       indexx=indexx-1;
    printf("deleted successfully\n");
    }
}
}
void main()
{
int choice;
do{
printf("1::Insert() 2::delete() 3::search() 4::Update() 5::traverse() 6::iafterSP()   7::deletefromSP()  0::exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:{insert();traverse();break;}
case 2:{delete();traverse();break;}
case 3:{search();break;}
case 4:{update();traverse();break;}
case 5:{traverse();break;}
case 6:{iafterSP();traverse();break;}
case 7:{dfromSP();traverse();break;}
}
}while(choice!=0);
}
