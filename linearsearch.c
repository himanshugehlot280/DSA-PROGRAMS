#include <stdio.h>
int linearSearch(int arr[], int size, int element) //linearSearch(arr,8,23)
{ 
   
   for (int i = 0; i < size; i++) //for(i=0;0<8;1)
   {
      if (arr[i] == element) //if(arr[1](34) == 23(false))
      {
         printf("element is found on the index no is -->%d",i);
         return i; 
      }
   }
   printf("Sorry, element not found in the array :(\n");
  return -1;
} 

int main()
{
   int arr[] = {34, 76, 12, 89, 90, 92, 45, 36};
   int size = sizeof(arr) / sizeof(int); //size=4*8/4=8
   int element;
   int Searchindex;

   printf("enter the element \n");
   scanf("%d", &element);                          //23
   printf("element --> %d\n", element);            //23
   Searchindex = linearSearch(arr, size, element); //linearSearch(arr,8,23);
   printf("\n",Searchindex);  
   
   return 0;
}