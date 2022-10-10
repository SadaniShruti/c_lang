// 1 D Array Example

void main()
{
	float a[5];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
	       printf("Enter a[%d]:",i+1);
	       scanf("%f",&a[i]);
	}
	for(i=0;i<5;i++)
	       printf("\n a[%d]=%.2f",i+1,a[i]);
	getch();
}