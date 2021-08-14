#include<iostream>
using namespace std;
class baseClass1
{
    protected:
        int a;
};
class baseClass2
{
    protected:
        int b;
};
class derivedClass : public baseClass1 ,baseClass2 
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
    derivedClass d(50,60);
    return 0;
}