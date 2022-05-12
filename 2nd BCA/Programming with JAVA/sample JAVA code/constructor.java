class program
{
    int value = 5;// <-- this is used to present datamember value
    public program()//constructor
    {  //this key is also used to call Constructor
        this(20);//second constructor will be called // this key word must be used as first line
        System.out.println("First Constructor"); // display when a object is created
    }
    public program(int value)
    {
        this("java",0.5f);//Third constructor will be called
        this.value = value;// <-- this keyword
        System.out.println("Second constructor");
        System.out.println("Value of class value: " + value);
    }
    public program(String text,float f)
    {
        System.out.println("Third Constructor");
        System.out.println("Values are: " + text + " and " +f);
    }
}
public class constructor 
{
    public static void main(String[] args) 
    {
        int num = 10;
        program p1 = new program();
        program p2 = new program(num);//call second constructor
        p1.value = 5;
        p2.value = 5;
    }    
}
