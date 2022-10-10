//Function without argument and without return value.

void main()
{
	clrscr();
	add();
	getch();
}
add()
{
	int a,b,c;
	printf("Enter two nos.");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n %d+%d=%d",a,b,c);
}