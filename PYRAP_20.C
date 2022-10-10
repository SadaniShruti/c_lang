/*           1
	  1     2
      1      2     3
  1      2      3     4  */

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("  %2d",j);
		printf("\n");
	}
	getch();
}