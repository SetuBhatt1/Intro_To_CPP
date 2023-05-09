
#include <iostream>
using namespace std;

int main ()
{
    //pointers
    // & --> address of operator
    // * --> dereference operator
    
    int  x = 100;
    int* y = &x;    //'y' points to the address of 'x' 
    
    cout<<x<<endl;
    cout<<y<<endl;
    
    cout<<&x<<endl; //address of 'x'
    cout<<y<<endl;
    
    cout<<x<<endl;
    cout<<*y<<endl; //value at address of 'x'
    
    //arrays
    int a[10];
    cout<<"enter elements:"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0; i<10; i++)
    {
       cout<<a[i]<<" ";
    }
    
    
    return 0;
}
