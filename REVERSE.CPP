#include<iostream.h>
#include<conio.h>
void main()
{
char array[10];
int i;
for(i=0;i<10;i++)
{
cout<<"enter the elements:"<<endl;
cin>>array[i];
}
cout<<"reverse order of entered element:"<<endl;
for(i=10;i>=0;i--)
{
cout<<array[i];
}
getch();
clrscr();
}