#include<iostream>
using namespace std;
class baseClass1
{
    private:
        int x;
    public:
        baseClass1(int x)
        {
            this->x = x;
            cout<<"X = "<<x<<endl;//output: 10
        }
};
class baseClass2
{
    private:
        int y;
    public:
        baseClass2(int y)
        {
            this->y = y;
            cout<<"Y = "<<y<<endl;//output: 20
        }
};
class drivedClass:public baseClass1,public baseClass2
{
    private:
        int z;
    public:
    drivedClass(int x,int y,int z) : baseClass1(x) , baseClass2(y)
    {
        this->z = z;
        cout<<"Z = "<<y<<endl;//output: 30
    }
};
int main()
{
    drivedClass d(10,20,30);
    return 0;
}