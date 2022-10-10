//Input two numbers.WAP that print sum of the numbers
#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c;
  clrscr();
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
  //&a
  c=a+b;
  printf("\n %d + %d = %d",a,b,c);
  getch();
}

