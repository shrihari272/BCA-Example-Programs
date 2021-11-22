// swap program for call by refrence
#include<iostream>
using namespace std;
void fact1(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter two number to swap :";
    cin>>a>>b;
    cout<<endl<<"Before swap A = "<<a<<" B = "<<b;
    fact1(a,b);
    cout<<endl<<"IN main() A = "<<a<<" B = "<<b;
    return 0;
}
void fact1(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<endl<<"IN fact1 A = "<<x<<" B = "<<y;
}