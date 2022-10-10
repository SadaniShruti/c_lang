
//Simple micro
#define PI 3.14
//Argumental macro
#define s(r) r*r
//Nested macro
#define c(r) s(r)* r

void main()
{
	 double x,a,v;
	 clrscr();
  printf("Enter redius");
  scanf("%lf",&x);
  a= PI*s(x);
  v= 4*PI*c(x)/3;
  printf("\n Area of circle %lf",a);
  printf("\n Area of Sphere %lf",v);
  getch();
}