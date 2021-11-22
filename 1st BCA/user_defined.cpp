#include<iostream>
using namespace std;
void display(test t);
class test
{
    private:int i=10,j=20;
    public:
            int a=60;
           void getdata()
           {
              cout<<"RUNING"<<endl; 
           }
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
    //cout<<t.i<<endl;//error line
   // cout<<t.j<<endl;//error line
    //we cant use this
    cout<<t.a<<endl;//we can access public 
}