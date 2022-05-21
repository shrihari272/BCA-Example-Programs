import java.util.Scanner;
public class Pattern {
    int n;
    Scanner sc = new Scanner(System.in);
    void half_pyramid()
    {
        System.out.println("Enter the range to print half pyramid : ");
        n = sc.nextInt();
        for(int i=0;i<n;i++)   
        {
            for(int j=0;j<=i;j++)
             System.out.print("* ");
             System.out.println("");
        }
    }
    void pyramid()
    {
        System.out.println("Enter the range to print pyramid : ");
        n = sc.nextInt();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            System.out.print(" ");
            for(int k=0;k<=i;k++)
            System.out.print("* ");
            System.out.println("");
        }
    }
    void diamond()
    {
        System.out.println("Enter the range to print diamond : ");
        n = sc.nextInt();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            System.out.print(" ");
            for(int k=0;k<=i;k++)
            System.out.print("* ");
            System.out.println("");
        }
        for(int i=0;i<n;i++)
        {
            for(int k=-1;k<=i;k++)
            System.out.print(" ");
            for(int j=1;j<n-i;j++)
            System.out.print("* ");
            System.out.println("");
        }
    }
    public static void main(String[] args) {
        Pattern p = new Pattern();
        p.half_pyramid();
        p.pyramid();
        p.diamond();
    }
}