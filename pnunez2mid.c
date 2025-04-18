//Pedro Nunez
//CSC-321
//Midterm
//
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void NameFunction(int number);

int main(void)
{
	int num;

	printf("Enter the amount of times you want your name to be printed: ");
	scanf("%d",&num);

	NameFunction(num);



	return EXIT_SUCCESS;

}


void NameFunction(int number)
{
	for(int i = 0; i < number; i++)
	{
	printf("Pedro \n");
	}

}
