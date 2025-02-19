//Pedro Nunez
//csc-321
//Lab #5
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, a = 0;
	double b = 20.0;
	char c = 'p';
	float d = 3.7777;

	int arr[10] = {19, 21, 42, 57, 343, 501, 301, 241, 117, 200};

	printf("The integer of a is %d and it's address is %p \n",a,&a);
	printf("The double of b is %f and it's address is %p \n",b,&b);
	printf("The char of c is %c and it's address is %p \n",c,&c);
	printf("The float of d is %f and it's address is %p \n",d,&d);

	/*
	{
		int y = 10;
	
	}
	printf("the value of y is %d \n",y);
	*/


	for(i = 0; i < 10;i++)
	{
		printf("The address of arr[%d] = %p \n",arr[i],&arr[i]);
	
	}






	return EXIT_SUCCESS;
}	


