#include<iostream>
using namespace std;
class test
{
    private:int i=10,j=20;
    public:
           void getdata()
           {
              cout<<"RUNNING"<<endl; 
           }
        friend void display(test t);
};
int main()
{
    test t;
    t.getdata();
    // t.display() error line
    display(t);
    return 0;
}
void display(test t)
{
    //Friend function can access private member of class
    cout<<t.i<<endl;//Accessing private variable
    cout<<t.j<<endl;//Accessing private variable
}
