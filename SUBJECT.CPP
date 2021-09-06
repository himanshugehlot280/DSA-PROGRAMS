#include<iostream.h>
#include<conio.h>
void main()
{
char *arr1[7]= {"java programming","php","data structure and algorithm","unix and shell programming","cloud computing","discrete structure","data communication"};
int i;
cout<<"subject in current semester are =>"<<endl;
for(i=0;i<7;i++)
{
cout<<endl;
cout<<i+1<<")"<<arr1[i]<<endl;
}
getch();
clrscr();
}
