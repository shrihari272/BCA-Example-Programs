#include<iostream>
using namespace std;
class baseClass
{
    private:
        int x;
    public:
        baseClass(int x)
        {
            this->x = x;
            cout<<"X = "<<x<<endl;//output: 10
        }
};
class drivedClass:public baseClass
{
    private:
        int y;
    public:
    drivedClass(int x,int y) : baseClass(x)
    {
        this->y = y;
        cout<<"Y = "<<y<<endl;//output: 20
    }
};
int main()
{
    drivedClass d(10,20);
    return 0;
}