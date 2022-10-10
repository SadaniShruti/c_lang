//Input a char. WAP that convert upper case letter into lower case and lower case letter into upper case.

void main()
{
	char c;
	clrscr();
	printf("\n color code in R-Red \n G-Green \n B-Blue");
	printf("\n Enter color code");
	scanf("%c",&c);
	switch(c)
	{
		case'r':
		case'R':
			printf("\n Red");
			break;
		case'g':
		case'G':
			printf("\n Green");
			break;
		case'b':
		case'B':
			printf("\n Blue");
			break;
		default:
			printf("\n Invaid color code");
			break;
		}
		getch();
	}