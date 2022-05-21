import java.util.Scanner;
public class Even_number {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int st,ed;
        System.out.println("Enter the starting point value : ");    
        st = sc.nextInt();
        System.out.println("Enter the ending point value : ");    
        ed = sc.nextInt();
        sc.close();
        for(int i=st;i<=ed;i++)
        {
            if(i%2 == 0)
            System.out.print(i + " ");
        }
    }

}