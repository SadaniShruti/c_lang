int a=10;
void main()
{
	{
		printf("\n a=%d",a);//10
		func1();
	}
	func1()
	{
		printf("\n a=%d",a);//10
	}
	getch();
}