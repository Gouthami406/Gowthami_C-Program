#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50
int arr[MAXSIZE];
int size=0;
int display()
{
  int i;
  if(size==0)
  {
    printf("Array is empty");
  }
  for(i=0;i<size;i++)
    {
      printf("%d",arr[i]);
    }
}
void insert(int position,int element)
{
  int i;
  for(i=size; i> position ;i--)
    {
      arr[i]=arr[i-1];
    }
  arr[position]=element;
  size++;
}
void deleteat(int position)
{
  int i;
  for(i=position;i<size-1;i++){
    arr[i]=arr[i+1];
  }
}
int main()
{
  while(1)
    {
      printf("1.Insert end\n");
      printf("2.insert at specified position\n");
      printf("3.delete at specified position\n");
      printf("4.display\n");
      printf("exit\n");
      int choice;
      int position;
      int element;
      printf("enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
        {
          case 1:if(size==MAXSIZE)
