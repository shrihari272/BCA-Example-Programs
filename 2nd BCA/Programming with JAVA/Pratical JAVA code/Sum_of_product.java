import java.util.Scanner;
public class Sum_of_product {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		String n1,n2;
		int num1,num2,p1,p2,sop=0;
		System.out.println("Enter the value for num1 :");
		n1 = sc.next();
		System.out.println("Enter the value for num2 :");
		n2 = sc.next();
        	sc.close();
		if(n1.length() == n2.length())
		{
			num1 = Integer.parseInt(n1);
			num2 = Integer.parseInt(n2);
			while(num1!=0 && num2!=0)
			{
				p1 = num1 % 10;
				p2 = num2 % 10;
				sop += (p1*p2);
				num1 /= 10;
				num2 /= 10;
			}
			System.out.println("Answer : " + sop);
		}
		else
			System.out.println("Unequal length");			
	}
}
