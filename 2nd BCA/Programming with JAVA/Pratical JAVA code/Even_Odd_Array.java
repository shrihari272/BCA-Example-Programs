import java.util.Arrays;
import java.util.Scanner;

public class Even_Odd_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,cnt=0;
        System.out.println("Enter the size of array : ");
        n = sc.nextInt();
        int arr[] = new int[n],temp[] = new int[n];
        System.out.println("Enter value for " + n + " elements : ");
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        sc.close();
        System.out.println("Before arranging elements : " + Arrays.toString(arr));
        for(int i=0;i<n;i++)
        {
            if(arr[i] % 2 == 0)
            {
                temp[cnt] = arr[i];
                cnt++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i] % 2 != 0)
            {
                temp[cnt] = arr[i];
                cnt++;
            }
        }
        System.out.println("After arranging elements : " + Arrays.toString(temp));
    }
    
}