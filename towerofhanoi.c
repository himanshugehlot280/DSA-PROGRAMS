#include<stdio.h>
void toh(int fnum,char S[5],char X[5],char D[5])
{
if(fnum==1)
{
    printf("move disk no %d from %s to %s\n",fnum,S,D);
  }
  else{
             
    toh(fnum-1,S,D,X);          
    printf("move disk no %d from %s to %s\n",fnum,S,D);
    toh(fnum-1,X,S,D);
    }             
}
void main()
{
int num;
printf("enter number of disk :: ");
scanf("%d",&num);//1 2 3....7
toh(num,"Source","Auxiliary","Destination");
}
