//正三角,倒三角输出九九乘法表
#include <stdio.h>
#include <math.h>
int   main( )


{
		int i,j,a,b;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
			{
			a=i*j;
			printf("%d*%d=%-3d ",j,i,a);
			}
		printf("\n");

	}
	for (i=9;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            b=i*j;
            printf("%d*%d=%-3d ",j,i,b);
        }
        printf("\n");
    }
    return 0;
}




