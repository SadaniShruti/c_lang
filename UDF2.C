//Function with argument but no return value.

void main()
{
	int a,b;
	clrscr();
	printf("Enter two nos:");
	scanf("%d %d",&a,&b);
	add(a,b);
	getch();
}
add(int x,int y)
{
	int z;
	z=x+y;
	printf("\n %d+%d=%d",x,y,z);
}
