/* 1
   2 3
   3 4 5
   4 5 6 7 */

void main()
{
	int n,i,j,k;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;i<=i;j++)
		{
			printf("%5d",k);
			k++;
		}
		printf("\n");
	}
	getch();
}