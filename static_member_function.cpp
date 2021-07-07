#include<iostream>
using namespace std;
class test
{
    private:int code;
            static int count;//Intial value of count = 0
    public:
           void setcode()
           {
               count++;
               code=count;// staic variable value never change
           }
           void showcode()
           {
               cout<<"Object number: "<<code<<"\n";
           }
           static void showcount()//Static function 
           {
               cout<<"count: "<<count<<"\n";
               // cout<<code; //Error line because in static function only static member variable can be used
           }
};
int test::count;//static member variable decleraction
int main()
{
    test t1,t2;
    t1.setcode();//count = 1 && code = 1
    t2.setcode();//count = 2 && code = 2
    test::showcount();//Static function call && Display value of count 
    test t3;
    t3.setcode();//count = 3 && code = 3
    test::showcount();// display value of count
    t1.setcode();//count = 4 && code = 4
    t2.setcode();//count = 5 && code = 5
    t3.showcode();//At the end value of count is 5 && Here value of the code is 3 
    return 0;
}