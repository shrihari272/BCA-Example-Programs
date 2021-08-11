#include<iostream>
using namespace std;
class baseClass
{
    private:
        int x;
    public:
        baseClass()
        {
            cout<<"Constructor of Base Class is called"<<endl;    
        }
        ~baseClass()
        {
            cout<<"Distructor of Base Class is called"<<endl;    
        }
};
class drivedClass:public baseClass
{
    public:
    drivedClass()
    {
        cout<<"Constructor of Drived Class is called"<<endl;
    }
    ~drivedClass()
    {
        cout<<"Distructor of Drived Class is called"<<endl;
    }
};
int main()
{
    drivedClass d;
    return 0;
}