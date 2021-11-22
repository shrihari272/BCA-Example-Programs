//Sum of two number by returning object
#include<iostream>
using namespace std;
class test
{
    private: int a,b,s;
    public:
        test()//default constructor
        {
            a = 0;
            b = 0;
            s = 0;
        }
        test(int a,int b)//parameterized constructor
        {
            this->a = a;
            this->b = b;
            s = 0;
        }
        test sum()
        {
            test obj;
            obj.s = a + b;
            return obj;
        }
        void display()
        {
            cout<<"Sum = "<<s;
        }
};
int main()
{
    test t1(10,20),t2;
    t2 = t1.sum();// Function call returns value and stored in t2
    t2.display();//Display value of sum
    return 0;
}