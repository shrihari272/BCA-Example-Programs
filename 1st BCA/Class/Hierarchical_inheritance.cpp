#include<iostream>
using namespace std;
class baseClass
{
    protected:
        int a,b;
};
class derivedClass1 : public baseClass
{
    public:
    derivedClass1(int x,int y)
    {
        a = x;
        b = y;
    }
    void sum1()
    {
        cout<<"Sum: "<<a + b<<endl; 
    }
};
class derivedClass2 : public baseClass
{
    public:
    derivedClass2(int x,int y)
    {
        a = x;
        b = y;
    }
    void sum2()
    {
        cout<<"Sum: "<<a + b<<endl; 
    }
};
int main()
{
    derivedClass1 d1(10,20);
    derivedClass2 d2(30,10);
    d1.sum1();
    d2.sum2();
    return 0;
}