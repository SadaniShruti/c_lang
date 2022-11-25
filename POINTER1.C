//Example of pointer
void main()
{
	int x=10,y;
	int *ptr;
	clrscr();
	ptr=&x;
	y=*ptr; //y=value at address(ptr)
	printf("\n \t %d",x);
	printf("\n \t %u refers %d",&x,x);
	printf("\n \t %d is stored at %u",*&x,&x);
	printf("\n \t %u refered with %u",ptr,&ptr);
	printf("\n \t y: %d",y);
	*ptr=25;
	printf("\n \t Now x=%d",x);
	getch();
}


