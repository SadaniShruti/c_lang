//example of while loop
//Input an integer no.WAP that print sum of individual digit of the no.

void main()
{
	int n,r,s=0;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	while(n>0)
	{
	     r=n%10;
	     s+=r;
	     n=n/10;
	}
	printf("\n s=%d",s);
	getch();
}