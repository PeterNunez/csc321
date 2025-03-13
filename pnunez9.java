//Pedro Nunez
//csc321
//lab #9
//
import java.util.Scanner;
import java.util.Random;

public class pnunez9
{
	public static void main(String[] args)
	{
		int guess = 0, i, x, y;

		Random rand = new Random();
		y = rand.nextInt(20)+1;

		while(guess < 1 || guess > 20)
		{
			System.out.println("Please Enter a number between 1 and 20: ");
			Scanner key = new Scanner(System.in);
			guess = key.nextInt();

			if(guess < 1 || guess > 20)
			{
				System.out.println("number is out of range ");
			
			}
		
		
		}

		for (i = 0; i < guess;i++)
		{
			if(guess > y)
			{
				System.out.println("ahhh Unlucky YOU LOSE your guess is higher than my number "+y);
				break;

			}
			else if(guess < y)
			{
				System.out.println("ahh Unlucky YOU LOSE your guess is lower than my number "+y);
				break;

			}
			else
			{
				System.out.println("Congratulations YOU WIN");
			
			}
		
		
		}

		
	
	}





}
