#include<iostream>
using namespace std;
int x=60; // Gobal variable
int y=80; // Gobal variable
int main()
{
    int x=10,y=20; // Local variable 
    cout<<"Local scope "<<"x = "<<x<<" "<<"y = "<<y<<endl;
    cout<<"Gobal scope "<<"x = "<<::x<<" "<<"y = "<<::y<<endl;
    {
        int x=100;// Local variable inside main()
        cout<<"Inside main() x = "<<x<<endl;
    }
    cout<<"Local scope outside "<<"x = "<<x; // Displaying Local variable of main()
    return 0;
}   
 