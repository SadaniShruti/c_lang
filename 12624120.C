//1 2 6 24 120...n nos.

void main()
{
	int i,n,a=1,b=2;
	clrscr();
	printf("Enter a no.:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a=a*b;
		b=b+1;
	}
	getch();
}