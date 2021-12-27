#include<stdio.h>
int input(int a,int b)
{
  scanf("%d",a);
  return a;
}
int add(int a,int b,int sum)
{
  sum =a+b;
  return sum;
}
void output(int a,int b, int sum)
{
 printf("sum of %d and %d is %d \n" ,a,b,sum) ;
}
int main()
{
  int a,b,sum,a1,a2,a3;
 printf("enter two numbers\n");
 a1=input(&a,&b);
 a2=input(&a,&b);
 a3=add(a1,a2,sum) ;
 output(a1,b2,a3);
}