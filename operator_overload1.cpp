#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    void get()
    {
        cout<<"Entre a number to compare:";
        cin>>a;
    }
    void operator >=(test t)
    {
        if(a>=t.a)
            cout<<"TRUE";
        else
            cout<<"FALSE";
    }
};
int main()
{
    test t1,t2;
    t1.get();
    t2.get();
    t1>=t2;
    return 0;
}