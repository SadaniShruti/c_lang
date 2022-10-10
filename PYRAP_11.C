/* 1
   0 1
   1 0 1
   0 1 0 1
   1 0 1 0 1 */

void main()
{
	int n,i,j,k;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   k=i;
	   for(j=1;j<=i;j++)
	   {
	      printf("%5d",k%2);
	      k++;
	   }
	   {
	      printf("\n");
	   }
	}
	getch();
}