#include<iostream>
using namespace std;
class selsort
{
    private: int a[10],n,i,j,temp,pos;
    public:
        void input();
        void sort();
        void output();
};
void selsort::input()
{
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter value for "<<n<<" elements: ";
    for(i=0;i<n;i++)
    cin>>a[i];
}
void selsort::sort()
{
    for(i=0;i<n-1;i++)
    {
        pos = i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            pos = j;
        }
        if(pos!=i)
        {
            temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;
        }
    }
}
void selsort::output()
{
    cout<<"After sorting: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    selsort s;
    s.input();
    s.sort();
    s.output();
    return 0;
}