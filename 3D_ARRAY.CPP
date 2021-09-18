#include<iostream.h>
#include<conio.h>
void main()
{
int multidimension[10][10][10];
int i,j,k;
int a,b,c;
int l,m,n;
cout<<"enter the number"<<endl;
cin>>l;
cout<<"enter the second number"<<endl;
cin>>m;
cout<<"enter the third number"<<endl;
cin>>n;
cout<<"enter the values in 3d array"<<endl;
for(i=0;i<1;i++)
{
for(j=0;j<m;j++)
{
for(k=0;k<n;k++)
{
cin>>multidimension[i][j][k];
}
}
}
cout<<"print the array and address"<<endl;
for(i=0;i<1;i++)
{
for(j=0;j<m;j++)
{
for(k=0;k<n;k++)
{
cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<multidimension[i][j][k]<<endl;
cout<<"addresses"<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<&multidimension[i][j][k]<<endl;
}
}
}
for(a=0;a<1;a++)
{
for(c=0;c<m;c++)
{
for(b=0;b<n;b++)
{
cin>>multidimension[a][b][c];
}
}
}
cout<<"print the array and addresses"<<endl;
for(a=0;a<1;a++)
{
for(c=0;c<m;c++)
{
for(b=0;b<n;b++)
{
cout<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"]"<<"="<<multidimension[a][b][c]<<endl;
cout<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"]"<<"="<<&multidimension[a][b][c]<<endl;
}
}
}
getch();
clrscr();
}



