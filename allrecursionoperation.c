#include<stdio.h>
int facto(int fnum)
{
int r=1;
printf("\tcoming inside for number= %d & upto the point result= %d\n",fnum,r);
if(fnum==1||fnum==0){r=1;}
else
{
r=fnum*facto(fnum-1);
}
printf("\tgoing outside for number= %d & upto the point result= %d\n",fnum,r);
return r;
}




/*
//by iteration(for loop)
int facto(int fnum)
{
int i,r=1;
for(i=fnum;i>=1;i--)
{
r=r*i;
printf("\tintermediate result= %d\n",r);
}
return r;
}
*/
void main()
{
int num,R;
printf("Enter number for factorial ");
scanf("%d",&num);
R=facto(num);
printf("Factorial = %d\n",R);
}
