#include<iostream>
using namespace std;
class bubble
{
    private: int a[10],n,i,j,temp;
    public:
        void input();
        void sort();
        void output();
};
void bubble::input()
{
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter value for "<<n<<" elements: ";
    for(i=0;i<n;i++)
    cin>>a[i];
}
void bubble::sort()
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void bubble::output()
{
    cout<<"After sorting: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    bubble b;
    b.input();
    b.sort();
    b.output();
    return 0;
}