#include<iostream>
using namespace std;
class baseClass
{
    protected:
        int a;
};
class derivedClass1 : public baseClass
{
    protected:
        int b;
};
class derivedClass2 : public derivedClass1 
{
    public:
    derivedClass2(int x,int y)
    {
        a = x;
        b = y;
        cout<<"Sum : "<<a + b;
    }
};
int main()
{
    derivedClass2 d(10,60);
    return 0;
}