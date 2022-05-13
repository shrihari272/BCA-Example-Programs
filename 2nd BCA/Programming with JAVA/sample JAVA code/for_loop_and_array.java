import java.util.Scanner;
import java.io.*;
public class for_loop_and_array {
    void disp(int...len)//^OR^ int[] len
    {
        for(int i :len){// for each loop
            System.out.println(i);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        /*
            int[] a;
            a = new int[3];
            ^OR^
        */
        int[] a = new int[3];
        a[0] = 1;
        a[2] = 2;
        System.out.println(a[0]);
        for_loop_and_array  loop = new  for_loop_and_array ();
        loop.disp(new int[] {5,2,3});
        loop.disp(a);
        sc.close();
    }
}