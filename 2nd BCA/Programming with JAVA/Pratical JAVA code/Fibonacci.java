import java.util.Scanner;

public class Fibonacci {
    Scanner sc = new Scanner(System.in);
    int f1=0,f2=1,f3,range;
    void for_method1(){
        System.out.println("Enter the range : ");    
        range = sc.nextInt();
        if(range<0)
        {
            System.out.println("Invalid range");
            System.exit(0);
        }
        for(int i=0;i<range;i++)
        {
            System.out.print(f1 + " ");
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        System.out.println("");
    }
    void reset()
    {
        f1 = 0;
        f2 = 1;
    }
    void recursion(int range){
        if(range == 0)
            return;
        System.out.print(f1 + " ");
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        recursion(range-1);
    }
    public static void main(String[] args) {
        Fibonacci f = new Fibonacci();
        System.out.println("Using for method");
        f.for_method1();
        f.reset();
        System.out.println("Using for recursion");
        f.recursion(f.range);
    }
}
