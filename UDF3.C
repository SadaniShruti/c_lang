//Function without argument but return value.

void main()
{
	int c;
	clrscr();
	c=add();
	printf("%d",c);
	getch();
}
add()
{
	int x,y,z;
	printf("Enter two nos:");
	scanf("%d %d",&x,&y);
	z=x+y;
	printf("\n %d+%d=",x,y);
	return z;
}