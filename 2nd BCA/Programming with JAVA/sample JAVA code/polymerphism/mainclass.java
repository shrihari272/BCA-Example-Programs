package polymerphism;

public class mainclass 
{
    public static void main(String[] args) 
    {
        superclass su1 = new superclass();
        subclass sb1 = new subclass();
        //superclass su2 = new subclass();//This also works
        superclass su2 = sb1;//Above syntax also work ^^//This is polymerphism
        su2.display();//call the subclass display() su2 can access sub if only identical function()
        su1.display();//call the superclass display()
       // su2.sub();error line;super class object cannot access sub class function 
       //it can access only identical name function which are same in both super and sub class
       //But sub class object can access all function in superclass because of extends keywoard
        su2.sup();
        sb1.sup();//sb class can access sp class
        sb1.sub();
        sb1.display();//display sub class display()
        //subclass sb2 = new superclass()//Can't be done
    }    
}
