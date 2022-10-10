//101 101 102 103 105 108...
//Fibonaci series

void main()
{
	int a=1,b=0,s,i,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=a+b;
		printf("%d\t",s+100);
		a=b;
		b=s;
	}
	getch();
}