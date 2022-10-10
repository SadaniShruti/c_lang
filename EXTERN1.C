//extern programme
void func1();
void func2();
void func3();
void func4();

void main()
{
	extern int a;
	clrscr();
	printf("Enter a:");
	scanf("%d",&a);
	func1();
	printf("\n after calling function1() \n a=%d",a);
	getch();
}
void func1()
{
	extern int a;
	printf("\n Inside function1 a=%d",a);
	a+=10;
	func2();
}
void func2()
{
	int a;
	printf("\n Inside func2 a=%d",a);
	a+=10;
	func3();
}
	void func3()
{
	extern int a;
	printf("\n Inside func3() a=%d",a);
	a+=10;
}
int a;//Defining extern variable