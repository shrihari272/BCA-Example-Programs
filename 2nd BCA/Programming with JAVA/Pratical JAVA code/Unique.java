import java.util.Scanner;
public class Unique {
    Scanner sc=new Scanner(System.in);
    void method1()
    {
        long num,temp;
        System.out.println("Enter a number :");
        num = sc.nextLong();
        temp = num;
        int cnt=0;
        while(num!=0)
        {
            num/=10;
            cnt++;
        }
        num = temp;
        int a[] = new int[cnt];
        for(int i=0;i<cnt;i++) 
        {
            a[i] = (int) (num % 10);
            num/=10;
        }   
        for(int i=0;i<cnt;i++)    
        {
            for(int j=i+1;j<cnt;j++)
            {
                if(a[i] == a[j])
                {
                    System.out.println("Not unique");
                    System.exit(0);  
                }
            }
        }
        System.out.println("Unique");    
    }
    void method2()
    {            
        String num;
        int len;
        System.out.println("Enter a number :");
        num = sc.next();
        len = num.length();
        for(int i=0;i<=len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(num.charAt(i) == num.charAt(j))
                {
                    System.out.println("Not unique");
                    System.exit(0);    		
                }
            }
        }
        System.out.println("Unique");
	}
    void method3()
    {
        int num,temp,c,r;
        System.out.println("Enter a number :");
        num = sc.nextInt();
        while(num != 0)
        {
            c = num % 10;
            num /= 10;
            temp = num;
            while(temp != 0)
            {
                r = temp % 10;
                if(c == r)
                {
                    System.out.println("Not unique");
                    System.exit(0);
                }
                temp /= 10;
            }
        }
        System.out.println("Unique");
    }
    public static void main(String[] args) {
        Unique uni = new Unique();
        System.err.println("Using method 1 : ");
        uni.method1();
        System.err.println("Using method 2 : ");
        uni.method2();
        System.err.println("Using method 3 : ");
        uni.method3();
    }       
}
