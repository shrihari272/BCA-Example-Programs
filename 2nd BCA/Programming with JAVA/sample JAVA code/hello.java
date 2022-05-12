//import java.util.Scanner; 
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class hello
{
    public static void main(String[] args) throws IOException
   {
        BufferedReader rd =new BufferedReader(new InputStreamReader(System.in));//Bufferreader    
    //    Scanner input = new Scanner(System.in);//scanner
        System.out.println("Hello world");
        String str;
        System.out.println("Enter your name:");
    //    sTr = input.nextLine();   //input
        str = rd.readLine();   //input
        System.out.println(str);
   }
}