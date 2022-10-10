//else if ladder example
//Input an int.no.WAP that check whether the number is +ve,-ve or zero.

void main()
{
	int n;
	clrscr();
	printf("Enter a no.");
	scanf("%d",&n);
	if(n==0)
		printf("%d is zero",n);
	else if (n>0)
		printf("%d is +ve",n);
	else
		printf("%d is -ve",n);
	getch();
}
