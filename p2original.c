#include <stdio.h>
int input ()
{
  int a;
  printf("Enter Value :");
  scanf("%d",&a);
  return a;
}
int add(int a,int b)

{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)

{
  printf("sum of two numbers is %d+%d=%d",a,b,sum);
}
int main()
{
  int a,b,result;
  a=input();
  b=input();
  result=add(a,b);
  output(a,b,result);
  return 0;

  } 