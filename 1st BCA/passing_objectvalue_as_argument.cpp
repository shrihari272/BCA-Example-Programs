//Sum of two number by passing object value as argument
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
        test(int a)//parameterized constructor
        {
            this->a = a;
            s = 0;
        }
        void sum(test t)
        {
            s = a + t.a;
            cout<<"Sum = "<<s;
        }
};
int main()
{
    test t1(10),t2(20);
    t1.sum(t2);//we passing object as argument
    return 0;
}