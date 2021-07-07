/*
FUNNCTION OVERLOADING :
Function overloading is defined as a function having same name with differ in number of arguments,
types of argument,sequence of arguments. 
*/
#include<iostream>
using namespace std;
int add(int,int);    // It return int type value    
int add(int,int,int);// It return int type value  
float add(float,int);// It return float type value  
float add(int,float);// It return float type value  
int main()
{
    int x,y,z;
    float a;
    cout<<"Enter four (3 int and 1 float) number :";
    cin>>x>>y>>z>>a;
    cout<<endl<<"Output of respective function :"<<add(x,y);
    cout<<endl<<"Output of respective function :"<<add(x,y,z);
    cout<<endl<<"Output of respective function :"<<add(x,a);
    cout<<endl<<"Output of respective function :"<<add(y,a);
    cout<<endl<<"Output of respective function :"<<add(a,z);
    return 0;
}
int add(int x,int y)
{
   return x+y;
}
int add(int x,int y,int z)
{
   return x+y+z;
}
float add(float a,int x)
{
    return a+x;
}
float add(int x,float a)
{
    return x+a;
}
