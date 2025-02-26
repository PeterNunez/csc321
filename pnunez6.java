//Pedro Nunez
//csc-321
//Lab #6
//

public class pnunez6
{
	public static void main(String[] args)
	{
		int x = 5;
		int y = 7;

		double xone = 5.0;
		double yone = 7.0;

		int a = x+y*x/y-x;
		System.out.println("The first expression in integer is:  "+a);

		int b = -x-y/x*y+x;
		System.out.println("The second expression in integer is:  "+b);

		int c = x+y-x/y;
		System.out.println("The third expression in integer is:  "+c);


		double d = xone+yone*xone/yone-xone;
		System.out.println("The first expression in double is:  "+d);

		double e = -xone-yone/xone*yone+xone;
		System.out.println("The second expression in double is:  "+e);

		double f = xone+yone-xone/yone;
		System.out.println("The third expression in integer is:  "+f);
	
	
	}




}


