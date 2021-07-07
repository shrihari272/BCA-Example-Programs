// Two example inline function 
#include<iostream>
using namespace std;
inline int function_name(int a,int b)
{
    return (a>b)?a:b;// (condition)?true_value:flase_value
}
inline int cube(int x)
{
    return x*x*x;
}
int main()
{
    int x,y,c;        
    cout<<"Enter a 2 number to fint greater number : ";
    cin>>x>>y;
    cout<<"Greater number is : "<<function_name(x,y);
    cout<<endl<<"Enter a number to get cube : ";
    cin>>c;
    cout<<"Cube of "<<c<<" is : "<<cube(c);
    return 0;
}
