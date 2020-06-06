#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fun(int,int,int*);
int main()
{   int C=0;
   
    fun(3,6,&C);
    printf("sum is %d\n",C);
}
int fun(int a,int b,int *PTR)
{
  *PTR=a+b;
   return 0;
}

