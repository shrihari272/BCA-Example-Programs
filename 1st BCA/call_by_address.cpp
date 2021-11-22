// swap program in call by address
#include<iostream>
using namespace std;
void func1(int *x,int *y);
int main()
{
    int x,y;
    cout<<"Enter two number :";
    cin>>x>>y;
    cout<<endl<<"Before swap x = "<<x<<" y = "<<y;
    func1(&x,&y);
    cout<<endl<<"In main() x = "<<x<<" y = "<<y;
    return 0;
}
void func1(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<endl<<"In func1() x = "<<*x<<" y = "<<*y;
}