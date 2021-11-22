#include<iostream>
using namespace std;
int main()
{
    bool a;
    int x=10,y=20,z=5;
    a=(x<y)&&(z<1); 
    //cout<<(x<y)&&(z<1); //return 1 its an error whole beakets required ()
    cout<<endl<<a; // return 0 because its flase
    /* if((x<y)&&(z>1)) // This line exicute condition is True
     {
         cout<<" True ";
     }*/
    return 0;
}


