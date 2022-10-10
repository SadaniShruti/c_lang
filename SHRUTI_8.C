//Typecasrting

void main()
{
  float a,d;
  int m1, m2, m3;
  clrscr();
  printf("Enter marks of 3 subjects");
  scanf("%d %d %d",&m1,&m2,&m3);
  a=(m1+m2+m3);
  d=a/3;

  printf("\n total  %f",a);
  printf("\n Average %f",d);
  getch();
}