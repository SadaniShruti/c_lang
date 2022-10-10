//Input nos. one by one until the no. is zero.WAP that print sum and average of all the nos.


void main()
{
	int n,s=0,c=0;
	float avg;
	clrscr();
	do
	{
	      printf("Enter n(0 to terminate):");
	      scanf("%d",&n);
	      if(n!=0)
	      {
		    s+=n;
		    c++;
	      }
	}
	      while(n!=0);
	      avg=(float)s/c;
	      printf("\n sum=% \n average =%2f",s,avg);
	      getch();
}