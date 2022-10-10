//Input 10 values in an array WAP that print sum and average of all the numbers.

void main()
{
	int a[10],i,sum=0;float avg;
	clrscr();
	for(i=0;i<10;i++)
	{
	     printf("Enter a[%d]:",i+1);
	     scanf("%d",&a[i]);
	     sum+=a[i];
	}
	avg=sum/10.0;
	for(i=0;i<10;i++)
	     printf("\n %d",a[i]);
	printf("\n sum=%d",sum);
	printf("\n Average=%.2f",avg);
	getch();
}