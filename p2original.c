#include<stdio.h>
int input();
int add(int a,int b);
void output(int a,int b,int sum);
int main()
{
 int a,b,sum;
 printf("enter two sum numbers\n");
 a=input();
 b=input();
 sum=add(a,b);
 output(a,b,sum);
}
  int input()
  {
    int a;
    scanf("%d" ,&a);
    return a;
  }
 int add (int a,int b)
 {
   int sum =a+b;
   return sum ;
 }
  void output(int a,int b,int sum)
{
  printf("sum of %d and %d is %d\n" ,a,b,sum);
}