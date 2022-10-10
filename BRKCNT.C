//break continue progamme

void main()
{
	int i,j,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	      for(j=i;j<=10;j++)
	      {
		  if((i+j)%4==0)
		      break;
		  if((i*j)%4==0)
		      continue;
		  printf("\n i=%d \t j=%d",i,j);
	      }
	}
	getch();
}