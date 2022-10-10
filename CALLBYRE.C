//Example of call by value & call by reference

void swap(int x,int y);
void swap1(int*x,int*y);

void main()
{
	int a,b;
	clrscr();
	printf("Enter two nos:");
	scanf("%d %d",&a,&b);
	printf("\n call by value:");
	printf("\n Before callling:");
	printf("\n a=%d \t b=%d",a,b);
	swap(a,b);
	printf("\n after calling:");
	printf("\n a=%d \t b=%d",a,b);
	printf("\n call by reference");
	printf("\n Before calling:");
	printf("\n a=%d \t b=%d",a,b);
	swap1(&a,&b);
	printf("\n After calling:");
	printf("\n a=%d \t b=%d",a,b);
	getch();
}
void swap (int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("\n Inside swap function a=%d \t b=%d",x,y);
}
void swap1(int*x,int*y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("\n Inside swap1 function a=%d \t b=%d",x,y);
}