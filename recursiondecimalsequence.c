#include<stdio.h>
//i/p num
//sum=1/!1+1/!2+1/!3+1/!4+.....1/!num

int facto(int fnum)
{
int r=1;
//printf("\tcoming inside for number= %d & upto the point result= %d\n",fnum,r);
if(fnum==1||fnum==0){r=1;}
else
{
r=fnum*facto(fnum-1);
}
//printf("\tgoing outside for number= %d & upto the point result= %d\n",fnum,r);
return r;
}
void main()
{
int num,i;
float R=0.0f;
printf("Enter last number for series ");
scanf("%d",&num);//1/!1+1/!2...1/!5
for(i=1;i<=num;i++)
{
R=R+(1.0/facto(i));
printf("##upto %d result= %f\n",i,R);
}
printf("result=  %f\n",R);
}




