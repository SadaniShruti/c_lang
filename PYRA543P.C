/* 5 4 3 2 1
   5 4 3 2
   5 4 3
   5 4
   5 */

void main()
{
	int n,i,j:
	clrcsr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf("%5d",j);
		printf("\n");
	}
	getch();
}