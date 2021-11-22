#include<iostream>
using namespace std;
int main()
{
    int i,n,*p;
    cout<<"Entre a number for array:";
    cin>>n;
    p = new int[n];
    cout<<"Enter value of "<<n<<" number:";
    for(i=0;i<n;i++)
    cin>>*(p+i);// or p[i]
    cout<<"Entred number is: ";
    for(i=0;i<n;i++)
    cout<<*(p+i)<<" ";// or p[i]
    delete p;
    return 0;
}