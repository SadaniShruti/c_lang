/*               5
	      5     4
	  5      4     3
      5      4      3     2
  5      4      3      2     1  */

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		      printf("  ");
		for(j=n;j>=i;j--)
		      printf("%4d",j);
		printf("\n");
	}
	getch();
}