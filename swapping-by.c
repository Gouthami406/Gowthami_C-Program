#include<stdio.h>
void swap(int*x,int *y)
{
  int temp=*x;
  *x=*y;
  temp=*x;
}
int main()
{
  int a=10,b=20;
  printf("the value before swapping a= %d\n and b= %d\n",a,b);
  swap(&a,&b);
  printf("the value after swapping a= %d\n and b= %d\n",a,b);
  return 0;
}
