#include<iostream>
using namespace std;
void display(const int x=10)
{
    // x++; error line
    cout<<"Value is constant variable x = "<<x<<endl;
}
int main()
{
    const int v=100;
    int a=5;
    // v=40 error line
    cout<<"Value of constant variable in main() v = "<<v<<endl;
    display(); // default call
    display(a); // single arugment 
    return 0;
} 
