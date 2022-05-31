import java.util.Scanner;

public class Product_bill {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        double amt=0,discount=0;
        char ch;
        System.out.println("Enter the Total amount : ");
        amt = sc.nextDouble();
        if(amt<0)
        {
            System.out.println("Invalid amount");
            System.exit(0);
        }
        System.out.println("Enter (H) for Handloom items and (M) for Mill cloth : ");
        ch = sc.next().charAt(0);
        sc.close();
        switch (ch) {
            case 'm':
            case 'M':
                    if(amt>=250 && amt<=500)
                        discount = amt * 0.05;
                    else if(amt>500 && amt<=750)
                        discount = amt * 0.075;
                    else if(amt>750)
                        discount = amt * 0.1;
                    System.out.println("Discount given : " + discount);
                    System.out.println("Total amount with discount is : " + (amt - discount));
                    break;
            case 'h':
            case 'H':
                    if(amt<=250)
                        discount = amt * 0.05;
                    else if(amt<=500)
                        discount = amt * 0.075;
                    else if(amt<=750)
                        discount = amt * 0.1;
                    else
                        discount = amt * 0.15;
                    System.out.println("Discount given : " + discount);
                    System.out.println("Total amount with discount is : " + (amt - discount));
                    break;
            default:
                System.out.println("Invalid choice");
        }

    }
    
}