import java.util.Scanner;

public class Quadratic_equation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b,c,x1,x2;
        System.out.println("Enter value for a ");
        a = sc.nextInt();
        System.out.println("Enter value for b ");
        b = sc.nextInt();
        System.out.println("Enter value for c ");
        c = sc.nextInt();
        sc.close();
        x1 =(int) ((-b + Math.sqrt((b*b-4*a*c)))/2*a);
        x2 =(int) ((-b - Math.sqrt((b*b-4*a*c)))/2*a);
        System.out.println("Value of x1 : " + x1);
        System.out.println("Value of x1 : " + x2);

    }    
}