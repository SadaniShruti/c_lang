//Bitwise oerators

void main()
{
  int a=22, b=13;
  clrscr();
  printf("Bitwise AND = %d", a&b);
  printf("\n Bitwise or = %d",a|b);
  printf("\n Bitwise xor=%d",a^b);
  printf("\n Shift Right= %d",a>>2);
  printf("\n Shift Left= %d",a<<2);
  printf("\n 1\'s complement=%u",~a);
  getch();
}