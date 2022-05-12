class method
{
    int b = 5;
    void talk(String name)
    {
        System.out.println(name);
    }
    int display()
    {
        int a = 10;
        System.out.println("Returning value ");
        return a;
    }
}
public class return_type
{
    public static void main(String[] args) 
    {
        method m = new method();
        String str = "Hi i am java!";
        m.talk(str);
        System.out.printf("DATA B: %d\n",m.b);
        int a = m.display();
        System.out.println("Data Member: " + a);
    }    
}