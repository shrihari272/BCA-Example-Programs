#include<iostream>
#include<iomanip> // for setw()
using namespace std;
int main()
{
    int a=100,b=200,c=7654;
    cout<<"Setw() is used to give space between two line : "<<setw(5)<<endl;
    cout<<" 50 "<<endl;// in this 5 space are there in that -*50* *=space mentioned in " " ;
    cout<<setw(5)<<a<<setw(5)<<b<<endl; // reserve 5 space -_-_- in that -_200 three are used
    cout<<setw(6)<<a<<setw(6)<<b<<endl; // reserve 6 space -_-_-_ in that -_-300 three are used
    cout<<setw(8)<<a<<setw(8)<<b<<endl;
    cout<<setw(3)<<c; // it dose not give any space because digit is more than space given
    cout<<setw(4)<<c;// no space
    cout<<setw(5)<<c;// one space is because 4 digit and 5 apce given 
    return 0;
}   
