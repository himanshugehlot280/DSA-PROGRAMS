#include<iostream.h>
#include<conio.h>
void main()
{
int arr1[5];
int i,j;
for(i=0;i<5;i++)
{
cout<<"enter the element:"<<"arr1["<<i<<"]";
cin>>arr1[i];
}
cout<<"entered elements are \n";
for(i=0;i<5;i++)
{
cout<<"arr1["<<i<<"]="<<arr1[i]<<"\n";
}
cout<<"the address where the elements are present \n";
for(i=0;i<5;i++)
{
cout<<"\n arr1["<<i<<"]="<<&arr1[i];
}
getch();
clrscr();
}