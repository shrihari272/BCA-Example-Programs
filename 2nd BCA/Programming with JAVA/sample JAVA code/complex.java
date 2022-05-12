import java.util.Scanner;
class calc
{
    int r1,r2,i1,i2,add,sub;
    Scanner input = new Scanner(System.in);
    void getdata()
    {
        System.out.printf("Enter the first real number part: ");
        r1 = input.nextInt();
        System.out.printf("Enter the first imaginary number part: ");
        i1 = input.nextInt();
        System.out.printf("Enter the second real number part: ");
        r2 = input.nextInt();
        System.out.printf("Enter the second imaginary number part: ");
        i2 = input.nextInt();
    }
    void addition()
    {
        add = r1 + r2;
        System.out.printf("Addition: %d",add);
        add = i1 + i2;
        if(add>=0)
         System.out.printf("+%di\n",add);
        else
        System.out.printf("%di\n",add);
    }
    void substraction()
    {
        sub = r1 - r2;
        System.out.printf("Substraction: %d",sub);
        sub = i1 - i2;
        if(sub>=0)
         System.out.printf("+%di\n",sub);
        else
        System.out.printf("%di\n",sub);    
    }
}
public class complex
{
    public static void main(String[] args) 
    {
        calc c = new calc();
        c.getdata();
        c.addition();
        c.substraction();;
    }
}