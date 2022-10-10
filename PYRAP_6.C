/*1 2 3 4 5
  2 3 4 5
  3 4 5
  4 5
  5 */

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
			printf("%5d",j);
		printf("\n");
	}
	getch();
}