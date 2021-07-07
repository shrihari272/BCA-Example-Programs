#include<iostream>
using namespace std;
class test
{
    private:int i=10,j=20;
    public:
           void getdata()
           {
              cout<<"RUNING"<<endl; 
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
    cout<<t.i<<endl;
    cout<<t.j<<endl;
}