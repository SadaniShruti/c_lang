//Example of recursion

long int fact(int);

void main()
{
	int n;
	long int f;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	f=fact(n);
	printf("\n factorial value of %d is %ld",n,f);
	getch();
}
long int fact(int n)
{
	long int f=1;
	if(n==1)
		return 1;
	f=n*fact(n-1);
	return(f);
}
