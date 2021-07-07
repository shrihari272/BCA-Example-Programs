#include<iostream>
using namespace std;
void display(int x=10,int y=20)
{
    cout<<"Value is : "<<x<<" "<<y<<endl;
}
int main()
{
    int a=5,b=6;
    cout<<"After function call "<<endl;
    display(); // default call
    display(a); // single arugment
    display(a,b); //two argument sent 
    return 0;
}   
