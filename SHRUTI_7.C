//conditional operator(?:)
//input an integer WAP that check whether number is odd, even or zero

void main ()
{
  int a;
  clrscr();
  printf("enter a no.");
  scanf("%d",&a);
  a==0? printf("%d is zero",a):
  a%2==0? printf("%d is even",a):
  printf("%d is odd",a);
  getch();
}