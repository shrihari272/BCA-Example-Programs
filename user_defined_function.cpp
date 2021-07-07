#include<iostream>
using namespace std;
int add(int a,int b)    // It return int type value
{
    return a+b; 
}
int main()
{
    int x,y;
    // string s1; // string datatype
    // bool f1=true; // true value is 1
    // s1 = "SDM COLLEGE";
    // cout<<s1<<" "<<f1<<endl;
    cout<<"Enter two to get sum : ";
    cin>>x>>y;
    cout<<"Sum is : "<<add(x,y);
    return 0;
}
