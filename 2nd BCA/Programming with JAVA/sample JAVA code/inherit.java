import inheritance.*;//path of inheritance file floder names
/*
^^OR^^
impotr inheritance.car;
impotr inheritance.factory;
*/
public class inherit
{
   public static void main(String[] args) 
   {
      int rEturn,rn;
      car car1 = new car();
      factory fact = new factory();
      rn = car1.models();//model function of class factory return value
      rEturn = fact.models();//car1 can access factory members due to extend keyword
      car1.display();
      System.out.println(rEturn);//Return 99
      System.out.println(rn);
   } 
}