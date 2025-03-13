//Pedro Nunez
//csc321
//lab #9
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int userguess = -1, i, x=5, y;

	srand(time(NULL));

	y = 1 + (rand() % 19);

	while(userguess < 1 || userguess > 20)
	{
		printf("Enter a number between 1 and 20 \n");
		scanf("%d",&userguess);
		if(userguess < 1 || userguess > 20)
		{
			puts("number out of range");
		
		}
	
	}

	for(i = 0; i < userguess;i++)
	{
		if(userguess > y)
		{
			printf("Ahh unlucky YOU LOSE your guess is higher than my number %d \n",y);
			break;
		
		}
		else if(userguess < y)
		{
			printf("Ahh unlucky YOU LOSE your guess is lower than my number %d \n",y);
			break;
		
		}
		else
		{
			printf("Congratulations YOU WON. this is y= %d \n",y);
		}
	}


	return EXIT_SUCCESS;
}
