#include<iostream.h>
#include<conio.h>
void main()
{
char arr[2][3] = {'1','2','3','4','5','6'};

for(int i=0;i<2;i++)
{
cout<<endl;
cout<<"[";
for(int j=0;j<3;j++)
{
cout<<arr[i][j];
}
cout<<"]";
}
getch();
clrscr();
}