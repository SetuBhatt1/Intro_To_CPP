#include <iostream>
using namespace std;

int x=30;

int main()
{
    int x=10;
    
    cout<<x<<endl;     // prints local variable
    cout<<::x<<endl;   // prints global variable using scope resolution operator
    
    return 0;
}
