/*1 2 3 4 5 4 3 2 1
  1 2 3 4   4 3 2 1
  1 2 3       3 2 1
  1 2           2 1
  1               1 */

void main()
{
	int n,i,j,sp=-1;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		     printf("%2d",j);
		for(j=1;j<=sp;j++)
		     printf("  ");
		sp+=2;
		if(i==n)
		     j=i-1;
		else
		     j=i;
		for( ; j>=1;j--)
		     printf("%2d",j);
		printf("\n");
	}
	getch();
}
