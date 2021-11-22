//Sum of two number by nested function
#include<iostream>
using namespace std;
class test
{
    private: int a,b,s;
        void display()
        {
            cout<<"Sum = "<<s;
        }
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
        void sum()
        {
            s = a + b;
            display();
        }
};
int main()
{
    test t1(10,20);
    t1.sum();//Function call
    return 0;
}