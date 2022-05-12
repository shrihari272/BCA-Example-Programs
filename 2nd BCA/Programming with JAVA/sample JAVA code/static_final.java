class student
{
    public static final int MY_CONSTANT = 7; //declaraction of constant variable and it is static
    //final keyword is used to create constant
    public String name;
    public static String name_class;// Declaring sataic variable
    public static int count = 0; //static value remain same in all object
    public student()//Constructor
    {
        count++;
    }
    public void display()
    {   
        System.out.println("Name of student: " + name);
        //In non static function we can use static data
        System.out.println(name_class);//It is a static variable
    }
    public static void student_de()
    {
        System.out.println(name_class);// ststic function only can access static variable
        //name = "changing student name" Error line
    }
}
public class static_final 
{
    public static void main(String[] args) 
    {
        student.name_class = "Web development";//initilizing satic variable
        // class_name.variable_name//function_name = values; systax to intilize//function_call static variable//function <--
        System.out.println("Before creation of Object value of count: " + student.count);//count = 0
        student s1 = new student();//creation of object
        student s2 = new student();

        s1.name = "Java";
        s2.name = "Python";

        s1.display();//function call for display named
        student.student_de();//To access the static function and variable above syntax is used ^^^
       // s1.name_class = "Changed"; this line throw's an error
        s2.display();
        student.student_de();//To access the static function and variable above syntax is used ^^^
        System.out.println(student.MY_CONSTANT);
        System.out.println("After creation of Object value of count: " + student.count);//count = 2

    }
}