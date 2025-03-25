//Pedro Nunez
//csc-321
//lab 10
//

import java.util.Scanner;

public class pnunez10
{
	public static void main(String[] args)
	{
		int x = 0, y = 0, i = 0;
		double z = 0, radius = 0, height = 0;

		System.out.println("Enter the radius of a cylinder");
		Scanner key = new Scanner(System.in);
		radius = key.nextDouble();

		System.out.println("Enter the height of a cylinder");
		height = key.nextDouble();

		z = cylinderArea(radius, height);

		System.out.println("The area of the cylinder is: "+z);


	
	
	}


	static double cylinderArea(double radius, double height)
	{

		double rad = radius * radius;
		double volume = 3.14 * rad * height;
		return volume;
	
	}




}
