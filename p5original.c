#include<stdio.h>
void cmp(int *a,int *b ,int *c, int *l );
void input(int *a,int *b, int *c);
void main()
{
 printf(" enter 3 numbers\n");
 int a,b,c,l;
 input(&a,&b,&c);
 cmp(&a,&b,&c,&l);
 printf("the greatest value of %d,%d and %d is %d\n",a,b,c,l);
}
void input(int *a, int *b, int *c)
{
  scanf("%d %d %d", a, b, c);
}
void cmp(int *a,int *b, int *c, int *l)
{
  if((*a>*b)&&(*a>*c))
  *l=*a;
  else
  if((*b>*a)&&(*b>*c))
  *l=*b;
  else
  if ((*c>*a)&&(*c>*b))
  *l=*c;
}   







