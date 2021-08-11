#include<iostream>
#include<iomanip>
#include<ios>
using namespace std;
int main()
{
    double pi1 = 3.142857142857;
    double pi2 = 3.14;
    cout<<fixed;
    cout<<"Before precision: "<<pi1<<endl;//output: 3.1428
    cout<<setprecision(3)<<"After precison: "<<pi1<<endl;//output: 3.14
    cout<<setprecision(5)<<"After precison: "<<pi1<<endl;//output: 3.1428
    cout<<setprecision(7)<<"After precison: "<<pi1<<endl;//output: 3.142857
    cout<<setprecision(7)<<"After precison: "<<pi2<<endl;//output: 3.1400000
    return 0;
}