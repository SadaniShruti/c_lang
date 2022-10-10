/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 */

void main()
{
	int n,i,j,k;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	k=1;
	for(i=1;i<=n;i++)
	{
	     for(j=1;j<=i;j++)
	     {
		printf("%5d",k);
		k++;
	     }
	     {
		printf("\n");
	     }
	}
	getch();
}