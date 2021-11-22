#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test(int z)
    {
      a = z;  
    }
    void operator -()//operator overloading 
    {
        a = -a; 
    }
    void display()
    {
        cout<<"Value is multiplied with '-' = ";
        cout<<a<<endl;
    }
};
int main()
{
    test t1(10),t2(20);
    //t1-t2; function call for an argument
    -t1; //function call for only one argument
    t1.display();
    -t2;
    t2.display();
    return 0;
}
