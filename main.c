//请在下方输入你的代码：
#include <stdio.h>
#include <math.h>
int   main( )

{
	float a,b,c,x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%lf,x2=%lf",x1,x2);
   return 0;

}