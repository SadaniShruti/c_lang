//Input an int no. WAP that check whether the no. is palindron or not

void main()
{
	int n,s=0,r,m;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
	      r=n%10;
	      s=s*10+r;
	      n=n/10;
	}
	if(s==m)
	      printf("\n %d is palindrome no.",m);
	else
	      printf("\n %d is not a palindrome no.",m);
	getch();
}