// conditional operator (?:)
// input an int. WAP that check whether the number is +ve, -ve or zero

void main()
{
  int a;
  clrscr();
  printf("Enter a no.");
  scanf("%d",&a);
  a>0?printf("%d is positive",a):
  a<0?printf("%d is nagative",a):
  printf("%d is zero",a);
  getch();
}

