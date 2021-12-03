#include<iostream.h>
#include<conio.h>
#include<malloc.h> 

@@ -16,13 +17,13 @@ struct Node 
{
   struct Node *Third =NULL;
   struct Node *Forth =NULL;
   struct Node *Fifth =NULL;

   First = (struct Node*)malloc (sizeof(struct Node));
   Second = (struct Node*)malloc (sizeof(struct Node));
   Third = (struct Node*)malloc (sizeof(struct Node));
   Forth = (struct Node*)malloc (sizeof(struct Node));
   Fifth = (struct Node*)malloc (sizeof(struct Node)); 
 
   First ->info =99;
   First ->p = Second;
   Second ->info = 88;
@@ -23,12,4,17 @@ struct Node
   Forth ->p =Fifth;
   Fifth ->info = 55;
   Fifth ->p =NULL;

   struct Node *temp;
   temp = First;
   cout<<"Displaying the elements in Linked list "<<endl; 

   getch(); 
   clrscr(); 
 }