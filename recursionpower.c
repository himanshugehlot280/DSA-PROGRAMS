#include<stdio.h>
 int findPower(int fnum,int fpr)
 {
    int FR=1;
   printf(" in recursion for num=%d power= %d & upto the point result= %d\n",fnum,fpr,FR);
    if(fpr==0){FR=1;}//2^0=1
    else 
        if(fpr==1){FR=fnum;}//2^1=2
        else{FR=fnum*findPower(fnum,fpr-1);}
   printf("  out from recursion for num=%d power= %d & upto the point result= %d\n",fnum,fpr,FR);
   return FR;
 }
//................................................................
void main()
{
int num,pr,R;
printf("enter number  ");
scanf("%d",&num);//2
printf("enter power  ");
scanf("%d",&pr);//8
  R=findPower(num,pr);//256
printf("Result= %d\n",R);
}
//...................................................................
