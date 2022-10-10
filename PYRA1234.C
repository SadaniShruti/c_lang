/* 1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1 */

void main()
{
	int n,i,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%5d",j);
		printf("\n");
	}
	getch();
}