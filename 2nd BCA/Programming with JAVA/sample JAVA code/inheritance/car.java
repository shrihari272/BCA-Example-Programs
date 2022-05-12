package inheritance;
public class car extends factory //Extend keyword is used to access the function//variable of other class 
{//In this example car class can access factory members also but factory class cannot access car
    public void display()
    {
        System.out.println("Tesla");   
    }
}
