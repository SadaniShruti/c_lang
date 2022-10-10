//example of do...while loop
//Input an integer no. WAP that print sum ofindividual digit of the no.

void main()
{
	int n,r,s=0;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	do
	{
	      r=n%10;
	      s+=r;
	      n=n/10;
	}
	while(n>0);
	printf("\n s=%d",s);
	getch();
}