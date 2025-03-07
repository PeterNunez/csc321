//Pedro Nunez
//Csc-321
//Midterm exam
//

import java.util.Scanner;

public class pnunezMidterm
{
	public static void main(String[] args)
	{

		int num = 7;

		System.out.println("Please guess a number: ");
		Scanner key = new Scanner(System.in);
		int user = key.nextInt();

		if(user != num)
	        {
		System.out.println("Ahh Unluckly guess my number was "+num+" and yours was "+user);
		System.out.println("YOU LOSE");
		}else
		{
		System.out.println("luckly guess my number was "+num+" and yours was "+user);
		 System.out.println("Congratulations: YOU WON A box of pizza");
		}
	
	
	
	}


}
