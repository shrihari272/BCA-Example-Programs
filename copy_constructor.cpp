#include<iostream>
using namespace std;
class test
{
    private: int a,b;
    public:
        test()//default constructor
        {
            a = 0;
            b = 0;
        }
        test(int a,int b)//parameterized constructor
        {
            this->a = a;
            this->b = b;
        }
        test(test &t)//copy constructor
        {
            a = t.a;
            b = t.b;
        }
        void display()
        {
            cout<<endl<<"Value of a = "<<a<<endl;
            cout<<"Value of b = "<<b<<endl;
        }
};
int main()
{
    test t1,t2(10,20);
    t1 = t2;//copy constructor will be called
    cout<<"Value in T1 object: ";
    t1.display();
    cout<<"Value in T2 object: ";
    t1.display();
    return 0;
}