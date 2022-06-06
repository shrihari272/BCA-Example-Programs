import java.util.Scanner;
public class Factroial_ncr_npr {
    static void ncr(int n,int r)
    {
        int c;
        c = fact(n) /(fact(r)*fact(n - r));
        System.out.println("Ncr : " + c);
    }
    static void npr(int n,int r)
    {
            int p;
            p = fact(n) / fact(n - r);
            System.out.println("Npr : " + p);
    }
    static int fact(int n)
    {
        if(n == 0)
            return 1;
        return (n * fact(n-1)); 
    }
    public static void main(String[] args) {
        int n,r;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value for n : ");
        n = sc.nextInt();
        System.out.println("Enter value for n : ");
        r = sc.nextInt();
        sc.close();
        ncr(n,r);
        npr(n,r);
    }  
}