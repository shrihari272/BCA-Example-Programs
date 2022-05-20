import java.util.Scanner;
public class Electric_bill {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int meter,c_no,per_meter,cur_meter,meter_no;
        String c_name;
        float amt;
        System.out.println("Enter Customer name :");
        c_name = sc.next();
        System.out.println("Enter Customer no :");
        c_no = sc.nextInt();
        System.out.println("Enter meter no :");
        meter_no = sc.nextInt();
        System.out.println("Enter current reading :");
        cur_meter = sc.nextInt();
        System.out.println("Enter pre reading:");
        per_meter = sc.nextInt();
        meter = cur_meter - per_meter;
        sc.close();
        if(meter>0)
        {
            if(meter<=30)
            amt = 100;
            else 
            if(meter<=100)
            amt = (float) (100 + (meter-30)*4.70);
            else 
            if(meter<=200)
            amt = (float) (429 + (meter-100)*6.25);
            else
            amt = (float) (1054 + (meter-200)*7.30);

            System.out.println("AMOUNT :" + amt);
            System.out.println("NAME :" + c_name);
            System.out.println("METER NO :" + meter_no);
            System.out.println("CUSTOMER NO :" + c_no);
        }
        else
            System.out.println("Invalid reading");  
    }
}