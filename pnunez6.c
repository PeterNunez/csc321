//Pedro Nunez
//csc-321
//Lab #6
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

	int x = 5;
	int y = 7;

	double xone = 5.0;
	double ytwo = 7.0;

	int a = x+y*x/y-x;
	printf("First expression in integer is: %d \n", a);
	
	int b = -x-y/x*y+x;
	printf("Second expression in integer is: %d \n",b);

	int c = x+y-x/y;
	printf("Third expression in integer is: %d \n",c);


	double d = xone+ytwo*xone/ytwo-xone;
	printf("First expression in double is: %f \n", d);

	double e = -xone-ytwo/xone*ytwo+xone;
	printf("Second expression in double is: %f \n", e);

	double f = xone+ytwo-xone/ytwo;
	printf("Third expression in double is: %f \n", f);


}
