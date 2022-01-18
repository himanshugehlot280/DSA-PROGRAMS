#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void main()
{
int i,size,newsize;
printf("Enter , how many elements you want to store ?? ");
scanf("%d",&size);//
int *ptr;
//pointer=(PDT *)malloc(how_many_elements * sizeof_of_eachelement);
ptr=(int *)malloc(size * sizeof(int));

for(i=0;i<size;i++)
{
printf("ATLEADY Stored at %u = %d\n",ptr+i,*(ptr+i));
printf("Enter element now ");
scanf("%d",ptr+i);
printf("stored successfully at %u\n",ptr+i);
}
printf("Elements\n");
for(i=0;i<size;i++)
{
printf(" %d",*(ptr+i));
}
printf("\n");
printf("Any alteration in size ??if yes enter new size ");
scanf("%d",&newsize);

       realloc(ptr,newsize);
for(i=0;i<newsize;i++)
{
printf("ATLEADY Stored at %u = %d\n",ptr+i,*(ptr+i));
printf("Enter elenent now ");
scanf("%d",ptr+i);
printf("stored successfully at %u\n",ptr+i);
}
printf("Elements\n");
for(i=0;i<newsize;i++)
{
printf(" %d",*(ptr+i));
}
printf("\n");
//free(ptr);
}
