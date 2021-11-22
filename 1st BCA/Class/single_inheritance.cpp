#include<iostream>
using namespace std;
class baseClass
{
    protected:
        int a,b;
};
class derivedClass:public baseClass
{
    public:
    derivedClass(int x,int y)
    {
        a = x;
        b = y;
        cout<<"Sum : "<<a + b;
    }
};
int main()
{
    derivedClass d(10,20);
    return 0;
}