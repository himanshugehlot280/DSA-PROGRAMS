#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void main()
{
int i,size;
printf("Enter , how many elements you want to store ?? ");
scanf("%d",&size);//
int *ptr;
//pointer=(PDT *)calloc(how_many_elements , sizeof_of_eachelement);
ptr=(int *)calloc(size , sizeof(int));

for(i=0;i<size;i++)
{
printf("ATLEADY Stored at %u = %d\n",ptr+i,*(ptr+i));
printf("Enter elenent now ");
scanf("%d",ptr+i);
printf("stored successfully at %u\n",ptr+i);
}
printf("Elements\n");
for(i=0;i<size;i++)
{
printf(" %d",*(ptr+i));
}
printf("\n");
free(ptr);
}
