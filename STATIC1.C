//Example of static variable
void func1();
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
		func1();
	getch();
}
void func1()
{
	int a=1;
	static int b=1;
	printf("\n a=%d \t b=%d",a,b);
	a++;
	b++;
}