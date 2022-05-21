import java.util.Scanner;
public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num,temp,r,rev=0;
        System.out.println("Enter value to check palindrome : ");
        num = sc.nextInt();
        sc.close();
        temp = num;
        while(num!=0)
        {
            r = num % 10;
            rev = rev*10 + r;
            num = num/10; 
        }
        System.out.println("Reversed number is : " + rev);
        if(rev == temp)
            System.out.println("It's a palindrome");
        else
            System.out.println("It's not a palindrome");
    }   
}