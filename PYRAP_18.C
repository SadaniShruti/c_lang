/*               5
	     4   5
	 3   4   5
     2   3   4   5
 1   2   3   4   5  */

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("   ");
		for(j=i;j<=n;j++)
			printf("%3d",j);
		printf("\n");
	}
	getch();
}

