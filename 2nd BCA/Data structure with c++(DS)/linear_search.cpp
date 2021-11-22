#include<iostream>
using namespace std;
class linear
{
    private: int n,i,se,a[10];
    public:
        void input();
        void search();
};
void linear::input()
{
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter value for "<<n<<" elements: ";
    for(i=0;i<n;i++)
    cin>>a[i];
}
void linear::search()
{
    cout<<"Enter a search element: ";
    cin>>se;
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        break;
    }
    if(i==n)
    cout<<"Entred search element not found";
    else
    cout<<"Entred search element "<<se<<" found in location "<<i+1;
}
int main()
{
    linear l;
    l.input();
    l.search();
    return 0;
}