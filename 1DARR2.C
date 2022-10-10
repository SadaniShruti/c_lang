//1 D Array Initialization Example

void main()
{
	int a[5]={10,20,30,40,50};
	int b[5]={10,20};
	int c[5]={0};
	int d[5]={1};
	int e[]={10,20,30};
	int i;
	clrscr();
	for(i=0;i<5;i++)
	      printf("\n a[%d]=%d",i,a[i]);
	for(i=0;i<5;i++)
	      printf("\n b[%d]=%d",i,b[i]);
	for(i=0;i<5;i++)
	      printf("\n c[%d]=%d",i,c[i]);
	for(i=0;i<5;i++)
	      printf("\n d[%d]=%d",i,d[i]);
	for(i=0;i<3;i++)
	      printf("\n e[%d]=%d",i,e[i]);
	getch();
}


