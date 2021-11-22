/*
Syntax:
typedef ReturnType (*Function_name)(argument_list)

typedef -> keywoard
Function_name -> name of function 
argument_list -> list of arguments
*/
#include<iostream>
#include<string.h>
using namespace std;
typedef void (*function1)(int,int);//pointer function1
typedef void (*function2)(char s[]);//pointer function2
void sum(int a,int b);
void name(char s[]);
int main()
{
    int a=10,b=20;
    char s[10];
    strcpy(s,"ABC");
    function1 ptr1;
    function2 ptr2;
    ptr1 = &sum;//Assigning
    ptr2 = &name;//Assigning
    ptr1(a,b);
    ptr2(s);
    return 0;
}
void sum(int a,int b)//function definition
{
    cout<<"Sum is :"<<a+b;
}
void name(char s[])//function definition
{
    cout<<endl<<"Name is :"<<s;
}